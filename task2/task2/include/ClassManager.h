#pragma once
#include<string>
#include "ClassTeam.h"
#include "ClassTasks.h"
#include<vector>

class Manager {
private:
	std::string name;
	Team* team;
	int order;
	bool HasFreeWorker;
	std::vector<Task*> tasks;
	std::vector<Task*> taskInWork;
public:
	Manager(int nameNumber);
	~Manager();
	void printTeam();
	void hashOrder(int bossOrder);
	void destributionTasks();
	bool chekHasFreeWorkers();
};