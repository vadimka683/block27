#include "ClassSquare.h"
#include<iostream>

void Square::square() {
	std::cout << "Squeare of square: " << lenght_edge * lenght_edge << "\n";
}

void Square::rectangle() {
	std::cout << "Rectangle of circle:\n";
	printRectangle(lenght_edge, lenght_edge);
}