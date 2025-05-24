#pragma once
#include<vector>
#include<string>

class Node {
private:
	std::vector<Node*> childs;
	int number;
	std::string name;
public:
	Node(int& counterChild);
	void searcheParents(int num, bool& searchStatus, bool& searchStatus1);
	void printChilds(int num);
};