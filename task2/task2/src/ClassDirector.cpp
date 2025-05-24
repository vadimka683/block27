#include "ClassDirector.h"
#include<iostream>

Director::Director() {
	name = "Director";
	hasFreeWorkers = true;
	int countManager = (rand() % 10) + 1;
	for (int i = 0; i < countManager; i++) {
		Manager* newManager = new Manager(i + 1);
		managers.push_back(newManager);
	}
}
void Director::printStatus() {
	for (int i = 0; i < managers.size(); i++) {
		managers[i]->printTeam();
	}
}
Director::~Director() {
	for (int i = 0; i < managers.size();i++) {
		delete managers[i];
	}
}
void Director::give_comand() {
	std::cout << "Input count comand: ";
	int count;
	std::cin >> count;
	for (int i = 0; i < managers.size();i++) {
		managers[i]->hashOrder(count);
		managers[i]->destributionTasks();
	}
}
bool Director::checkFreeComand() {
	for (int i = 0;i < managers.size();i++) {
		if (managers[i]->chekHasFreeWorkers()) {
			return true;
		}
	}
	return false;
}
