#pragma once
#include<vector>
#include "ClassWorker.h"

class Team {
private:
	int teamNumber;
	int countWorkerInTeam;
	int countFreeWorker;
	std::vector<Worker*> workers;
	std::vector<Worker*> freeWorkers;
public:
	Team(int number);
	~Team();
	void printTeam();
	void addWorkerInTeam(); 
	void kikWorkerOutTeam(int workerNumber);
	int getTeamNumber();
	int getCountWorkerInTeam();
	int getCountFreeWorker();
	void incCountFreeWorker();
	void deCountFreeWorker();
	Worker* getFreeWorker();
};