#include "ClassWorker.h";
#include<string>
#include<sstream>

Worker::Worker(int worker_number) {
	std::stringstream temp;
	temp << "Worker" << worker_number;
	temp >> this->name;
	this->isFree = true;
	this->task = nullptr;
}
bool Worker::getStatus() {
	return isFree;
}
Task* Worker::getTask() {
	return task;
}
void Worker::setStatusIsFree(bool status) {
	this->isFree = status;
}
void Worker::setTask(Task* task) {
	this->task = task;
}
std::string Worker::getNameWorker() {
	return name;
}
