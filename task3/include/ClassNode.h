#pragma once
#include<vector>
#include<string>

class Node {
private:
	std::vector<Node*> child;
	std::string name;
public:
	std::string getName();
	Node(std::string name);
	void pushNewChild(Node* child);
};