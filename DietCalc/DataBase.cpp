#include "DataBase.h"
#include "sqlite3.h"
#include <iostream>


DataBase::DataBase() {
}


DataBase::~DataBase() {
}

int DataBase::Connect(void) {
	sqlite3 *dataBase;
	int rc = sqlite3_open("MyDb.db", &dataBase);
	if (rc) {
		std::cerr << "Error opening SQLite3 database: " << sqlite3_errmsg(dataBase) << '\n';
		sqlite3_close(dataBase);
		return 1;
	}
	else {
		std::cout << "Opened MyDb.db." << '\n';
	}
	return 0;
}
