#include "ClassTeam.h"
#include<iostream>

Team::Team(int number) {
	this->teamNumber = number;
	this->countWorkerInTeam = rand() % 5 + 1;
	for (int i = 0; i < countWorkerInTeam; i++) {
		Worker* new_worker = new Worker(i + 1);
		workers.push_back(new_worker);
		freeWorkers.push_back(new_worker);
	}
	this->countFreeWorker = countWorkerInTeam;
}
Team::~Team() {
	for (int i = 0; i < workers.size(); i++) {
		delete workers[i];
	}	
}
Worker* Team::getFreeWorker() {
	if (freeWorkers.size() == 0) {
		return nullptr;
	}
	else {
		Worker* temp = freeWorkers[0];
		freeWorkers.erase(freeWorkers.begin());
		return temp;
	}
}

void Team::printTeam() {
	for (int i = 0; i < workers.size(); i++) {
		if (workers[i]->getStatus() == true) {
			std::cout << "\t" << workers[i]->getNameWorker() << " free\n";
		}
		else {
			std::cout << "\t" << workers[i]->getNameWorker()
					<< " performs task ' " << workers[i]->getTask()->getName()<< "'\n";
		}
	}
}
void Team::addWorkerInTeam() {
	Worker* new_worker = new Worker(workers.size() + 1);
	workers.push_back(new_worker);
}
void Team::kikWorkerOutTeam(int workerNumber) {
	delete workers[workerNumber - 1];
	workers.erase(workers.begin() + (workerNumber - 1));
}
int Team::getTeamNumber() {
	return teamNumber;
}
int Team::getCountWorkerInTeam() {
	return countWorkerInTeam;
}
int Team::getCountFreeWorker() {
	return countFreeWorker;
}
void Team::incCountFreeWorker() {
	countFreeWorker++;
}
void Team::deCountFreeWorker() {
	countFreeWorker--;
}
