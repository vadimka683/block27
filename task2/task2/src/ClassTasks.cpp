#include "ClassTasks.h"
#include<iostream>

Task::Task(int taskNumber) {
	int bot = 'A';
	int top = 'Z';
	int indexName = (rand() % (top - bot)) + bot;
	name = indexName;
}
char Task::getName() {
	return name;
}
