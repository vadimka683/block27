#include "ClassFigure.h"
#include<iostream>

Figure::Figure() : coordinates({ 0,0 }), color("White") {}

Figure::Figure(std::vector<int>& inCoordinates, std::string& inColor) {
	coordinates = inCoordinates;
	color = inColor;
}

Figure::Figure(Figure& figure) {
	this->color = figure.color;
	this->coordinates = figure.coordinates;
}

std::vector<int> Figure::GetCoordinates() {
	return coordinates;
}
std::string Figure::GetColor() {
	return color;
}

bool Figure::SetCoordinates(std::vector<int>& temp) {
	if (temp.size() > 2 || temp[0] < 0 || temp[1] < 0) {
		return false;
	}
	coordinates = temp;
	return true;
}

bool Figure::SetColor(std::string& temp) {
	if (temp.length() == 0) {
		return false;
	}
	color = temp;
	return true;
}

void Figure::printRectangle(double height, double& widht) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < widht; j++) {
			if (i == 0 || i == height - 1) {
				std::cout << "-";
			}
			else if (j == 0 || j == widht - 1) {
				std::cout << "|";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
}

