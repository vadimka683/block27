#pragma once
#include<vector>
#include<string>

class Node {
private:
	std::vector<Node*> childs;
	int number;
	std::string nameNode;
	std::string nameElf;
public:
	Node(int number, std::string nameParent, int numberInArrayChild);
	void searcheParents(int num, bool& searchStatus, bool& searchStatus1, std::vector<int>& neibors);
	void printChilds(int num);
	int chekFreeLotForChild();
	void addChild(Node* &root, int number, bool& itPushed);
};