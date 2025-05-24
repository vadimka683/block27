#include "task2.h"
#include<ctime>
#include "ClassDirector.h"

int main()
{
	srand(time(NULL));
	Director* director = new Director();   
	director->printStatus();
	while (director->checkFreeComand()) {
		director->give_comand();
		director->printStatus();
	}
	delete director;
}