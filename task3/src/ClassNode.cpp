#include "ClassNode.h"
#include<iostream>

Node::Node(int& counterChild) {
	name = "Elf ";
	number = counterChild;
	counterChild++;
	int count_child = rand() % 3;
	if (count_child == 0) {
		return;
	}
	for (int i = 0; i < count_child; i++) {
		Node* child = new Node(counterChild);
		childs.push_back(child);
	}
}

void Node::printChilds(int num) {
	for (int i = 0; i < childs.size();i++) {
		if (childs[i]->number == num) {
			continue;
		}
		std::cout << "Neighbours: ";
		if (i == childs.size() - 1) {
			std::cout << childs[i]->number << "\n";
		}
		else {
			std::cout << childs[i]->number << ", ";
		}
	}
}

void Node::searcheParents(int num, bool& searchStatus,bool& searchStatus1) {
	if (number == num) {
		searchStatus = true;
		printChilds(num);
		return;
	}
	int counter = 0;
	int child_size = childs.size();
	while (counter < child_size) {
		if (searchStatus1) {
			return;
		}
		childs[counter]->searcheParents(num, searchStatus, searchStatus1);
		counter++;
		if (searchStatus) {
			printChilds(num);
			searchStatus1 = true;
			break;
		}
	}
	if (searchStatus1) {
		return;
	}
}
