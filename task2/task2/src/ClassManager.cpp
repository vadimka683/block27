#include "ClassManager.h"
#include<sstream>
#include<iostream>

Manager::Manager(int nameNumber) {
	std::stringstream temp;
	temp << "Manager" << nameNumber;
	temp >> name;
	team = new Team(nameNumber);
	order = 0;
	HasFreeWorker = true;
	tasks = {};
}
Manager::~Manager() {
	delete team;
	for (int i = 0; i < tasks.size(); i++) {
		delete tasks[i];
	}
	for (int i = 0; i < taskInWork.size(); i++) {
		delete taskInWork[i];
	}
}
void Manager::hashOrder(int bossOrder) {
	order = (bossOrder + (rand() % 1000)) % team->getCountWorkerInTeam() + 1;
	for (int i = 0; i < order; i++) {
		Task* newTask = new Task(i);
		tasks.push_back(newTask);
	}
}

void Manager::destributionTasks() {
	int temp = order;
	Worker* curWorker = team->getFreeWorker();
	while (tasks.size() != 0 && curWorker != nullptr) {
		curWorker->setTask(tasks[0]);
		curWorker->setStatusIsFree(false);

		team->deCountFreeWorker();
		taskInWork.push_back(tasks[0]);
		tasks.erase(tasks.begin());
		if (team->getCountFreeWorker() == 0) {
			HasFreeWorker = false;
			break;
		}
		if (tasks.size() == 0) {
			break;
		}
		curWorker = team->getFreeWorker();
	}
}
void Manager::printTeam() {
	std::cout << this->name << " - Team " << this->team->getTeamNumber();
	std::cout << "\n";
	this->team->printTeam();
}

bool Manager::chekHasFreeWorkers() {
	return HasFreeWorker;
}
