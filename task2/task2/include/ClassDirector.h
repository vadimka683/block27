#pragma once
#include<string>
#include "ClassManager.h"
#include<vector>

class Director {
private:
	std::string name;  
	std::vector<Manager*> managers;
	bool hasFreeWorkers;
public:
	Director();
	~Director();
	void give_comand();
	void printStatus();
	bool checkFreeComand();
};