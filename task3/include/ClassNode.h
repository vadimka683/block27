#pragma once
#include<vector>
#include<string>

class Node {
private:
	std::vector<Node*> childs;
	int number;
	std::string name;
public:
	Node(int& counterChild, std::string& parantName);// auto Tree
	Node(int number);
	void searcheParents(int num, bool& searchStatus, bool& searchStatus1, std::vector<int>& neibors);
	void printChilds(int num);
	void printTree();
	int chekFreeLotForChild();
	void addChild(Node* &root, int number, bool& itPushed);
};