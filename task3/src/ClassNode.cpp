#include "ClassNode.h"
#include<iostream>
#include<sstream>

Node::Node(int number, std::string nameParent, int numberInArrayChild) {
	this->number = number;
	std::stringstream naming;
	naming << "Elf " << number;
	getline(naming, nameElf);


	naming.clear();
	naming << nameParent << "." << numberInArrayChild + 1;
	getline(naming, nameNode);
	childs = {};
}

void Node::printChilds(int num) {
	if (childs.size() != 0) {
		std::cout << nameNode << " - " << nameElf << "\n";
	}
	for (int i = 0; i < childs.size();i++) {
		std::cout << "\t" << childs[i]->nameNode << " - " << childs[i]->nameElf << "\n";
	}
	int counter = 0;
	while (counter < childs.size()) {
		childs[counter]->printChilds(num);
		counter++;
	}
}

void Node::searcheParents(int num, bool& searchStatus, bool& searchStatus1, std::vector<int>& neibors) {
	if (number == num) {
		for (int i = 0; i < childs.size();i++) {
			neibors.push_back(childs[i]->number);
		}
		if (childs.size() == 0) {
			searchStatus = true;
		}
		else {
			searchStatus1 = true;
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
			neibors.push_back(number);
			searchStatus1 = true;
			break;
		}
	}
}



int Node::chekFreeLotForChild() {
	std::vector<int> lowChildArray;
	lowChildArray.push_back(this->childs[0]->childs.size());
	lowChildArray.push_back(0);
	for (int i = 1; i < this->childs.size();i++) {
		if (childs[i]->childs.size() < lowChildArray[0]) {
			lowChildArray[0] = childs[i]->childs.size();
			lowChildArray[1] = i;
		}
	}
	if (lowChildArray[0] < 4) {
		return lowChildArray[1];
	}
	else {
		return -1; 
	}
}

void Node::addChild(Node*& root, int number, bool& itPushed) {
	if (root->childs.size() < 4) {
		Node* newNode = new Node(number,nameNode,root->childs.size());
		root->childs.push_back(newNode);
		itPushed = true;
		return;
	}
	int temp = root->chekFreeLotForChild();
	if (temp != -1) {
		addChild(root->childs[temp], number, itPushed);
		return;
	}
	for (int i = 0; i < childs.size();i++) {
		addChild(root->childs[i], number, itPushed);
		if (itPushed) {
			return;
		}
	}

}