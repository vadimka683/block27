#include "ClassTree.h"
#include<string>
#include<sstream>

Tree::Tree() {
	root = new Node("root");
	int countBig = (rand() % 2) + 3;
	for (int i = 0; i < countBig;i++) {
		std::stringstream temp;
		temp << "Node 1." << i;
		std::string name1;
		temp >> name1;
		Node* temp1 = new Node(name1);
		root->pushNewChild(temp1);
		temp1 = nullptr;
	}
}