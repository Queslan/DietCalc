#include "DataBase.h"
#include "sqlite3.h"
#include <iostream>


DataBase::DataBase() {
}


DataBase::~DataBase() {
}

	int DataBase::Connect(void) {
	sqlite3 *dataBase;
	const char* data = "Callback function called";
	char *zErrMsg = 0;
	int rc = sqlite3_open("MyDb.db", &dataBase);
	if (rc) {
		std::cerr << "Error opening SQLite3 database: " << sqlite3_errmsg(dataBase) << '\n';
		sqlite3_close(dataBase);
		return -1;
	}
	else {
		std::cout << "Opened MyDb.db." << '\n';
	}
	char* sql = "SELECT * from Food";
	rc = sqlite3_exec(dataBase, sql, callback, (void*)data, &zErrMsg);

	return 0;
}

	int DataBase::callback(void *data, int argc, char **argv, char **azColName) {
	int i;
	fprintf(stderr, "%s: ", (const char*)data);

	for (i = 0; i<argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}

	printf("\n");
	return 0;
}
