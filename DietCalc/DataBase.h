#pragma once
class DataBase {
public:
	DataBase();
	~DataBase();
	static int Connect();
	static int callback(void *data, int argc, char **argv, char **azColName);
};

