#pragma once
#include "sqlite3.h"
#include <vector>

class DataBase {
public:
	DataBase();
	~DataBase();
	void PrintContents(const char* sql);
	std::vector<std::string> FillVectorOfNames();
	static std::string ConvertToString(const unsigned char* text);
	
private:
	 sqlite3** dataBase = new sqlite3*;
	 int rc;
	 static int CallBack(void *data, int argc, char **argv, char **azColName);
};

