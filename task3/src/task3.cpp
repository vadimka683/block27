#include "task3.h"
#include<ctime>
#include<ClassNode.h>

int main()
{
	srand(time(NULL));
	int counterChild = 1;
	Node* root = new Node(counterChild);
	bool temp1 = false;
	bool temp2 = false;
	root->searcheParents(4, temp1, temp2);
}
