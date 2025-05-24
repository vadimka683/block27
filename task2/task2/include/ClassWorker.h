#pragma once
#include<string>
#include "ClassTasks.h"

class Worker {
private:
	std::string name;
	bool isFree;
	Task* task;
public:
	Worker(int worker_number);
	bool getStatus();
	Task* getTask();
	void setStatusIsFree(bool status);
	void setTask(Task* task);
	std::string getNameWorker();
};