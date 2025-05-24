#include "ClassNode.h"

std::string Node::getName() {
	return this->name;
}
Node::Node(std::string name) {
	this->name = name;
}
void Node::pushNewChild(Node* child) {
	this->child.push_back(child);
}