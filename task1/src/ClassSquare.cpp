#include "ClassSquare.h"
#include<iostream>

Square::Square() {
	std::cout << "Input lenght_edge coordinates color: ";
	std::cin >> lenght_edge >> coordinates[0] >> coordinates[1] >> color;
}

void Square::square() {
	std::cout << "Squeare of square: " << lenght_edge * lenght_edge << "\n";
}

void Square::rectangle() {
	std::cout << "Rectangle of circle:\n";
	printRectangle(lenght_edge, lenght_edge);
}