#include "DataBase.h"
#include <iostream>
#include <sstream>
#include <string>

DataBase::DataBase() {
	rc = sqlite3_open("MyDb.db", dataBase);
	if (rc)
		std::cerr << "Error opening SQLite3 database: " << sqlite3_errmsg(*dataBase) << '\n';
}

DataBase::~DataBase() {
	sqlite3_close(*dataBase);
	delete dataBase;
}

void DataBase::PrintContents(const char* sql) {
	char *zErrMsg = 0;
	rc = sqlite3_exec(*dataBase, sql, CallBack, nullptr, &zErrMsg);
	if (rc) {
		std::cerr << "SQL error: "<< zErrMsg;
		sqlite3_free(zErrMsg);
	}
}
int DataBase::CallBack(void *data, int numberOfColumns, char **rowsData, char **colNames) {

	for (int i = 0; i < numberOfColumns; i++) {
		std::cout << colNames[i] <<" : " << (rowsData[i] ? rowsData[i] : "NULL") << '\n';
	}
	return 0;
}

std::vector<std::string> DataBase::FillVectorOfNames() {
	std::vector<std::string> names;
	sqlite3_stmt *stmt;
	int rc = sqlite3_prepare_v2(*dataBase, "SELECT Name from Food", -1, &stmt, NULL);
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		 names.push_back(ConvertToString(sqlite3_column_text(stmt, 0)));
	}
	sqlite3_finalize(stmt);
	return names;
}

std::string DataBase::ConvertToString(const unsigned char* text) {
	std::stringstream stream;
	stream << text;
	return stream.str();
}