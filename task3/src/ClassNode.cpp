#include "ClassNode.h"
#include<iostream>
#include<sstream>

Node::Node(int& counterChild, std::string& parantName) {
	name = parantName;
	number = counterChild;
	counterChild++;

	int count_child = rand() % 3;
	if (count_child == 0) {
		return;
	}
	for (int i = 0; i < count_child; i++) {
		std::stringstream nameing;
		nameing << parantName << "." << i + 1;
		std::string temp_name;
		std::getline(nameing, temp_name);
		Node* child = new Node(counterChild, temp_name);
		childs.push_back(child);
	}
}

void Node::printChilds(int num) {
	std::cout << "Childs: ";
	if (childs.size() == 0) {
		std::cout << "NONE\n\n";
	}
	for (int i = 0; i < childs.size();i++) {
		if (i == childs.size() - 1) {
			std::cout << childs[i]->number /* << " " << childs[i]->name */<< "\n\n";
		}
		else {
			std::cout << childs[i]->number /* << " " << childs[i]->name */<< ", ";
		}
	}
}

void Node::printTree() {
	std::cout << "Elfe " << " " << number << "\n";
	printChilds(number);
	int counter = 0;
	while (counter < childs.size()) {
		childs[counter]->printTree();
		counter++;
	}
}

void Node::searcheParents(int num, bool& searchStatus,bool& searchStatus1, std::vector<int>& neibors) {
	if (number == num) {
		searchStatus = true;
		for (int i = 0; i < childs.size();i++) {
			neibors.push_back(childs[i]->number);
		}
		return;
	}
	int counter = 0;
	int child_size = childs.size();
	while (counter < child_size) {
		childs[counter]->searcheParents(num, searchStatus, searchStatus1, neibors);
		counter++;
		if (searchStatus1) {
			return;
		}
		if (searchStatus) {
			for (int i = 0; i < childs.size();i++) {
				if (childs[i]->number == num) {
					continue;
				}
				neibors.push_back(childs[i]->number);
			}
			searchStatus1 = true;
			break;
		}
	}
}
