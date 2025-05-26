#include "task3.h"
#include<ctime>
#include<ClassNode.h>
#include<iostream>


static void printNeibors(std::vector<int>& neibors) {
	std::cout << "Neibors: ";
	for (int i = 0;i < neibors.size();i++) {
		std::cout << neibors[i] << " ";
	}
	std::cout << "\n";
}
static void searchNeibors(Node* root, int user_number) {
	bool temp1 = false;
	bool temp2 = false;
	std::vector<int> neibors;
	root->searcheParents(user_number, temp1, temp2, neibors);
	printNeibors(neibors);
}

int main()
{
	srand(time(NULL));
	int counterChild = 1;
	std::string name = "Elf 1";
	//Node* root = new Node(counterChild, name);
	Node* root = new Node(counterChild);
	bool chek = false;
	for (int i = 0; i < 54;i++) {
		counterChild++;
		root->addChild(root, counterChild, chek);
	}
	root->printChilds(1);
	do {
		std::cout << "Input your number for search neibors or -1 for exit: ";
		int answer;
		std::cin >> answer;
		if (answer == -1) {
			return 0;
		}
		else if (answer > counterChild - 1) {
			std::cout << "Unreal number\n";
			continue;
		}
		searchNeibors(root, answer);
	} while (true);
}
