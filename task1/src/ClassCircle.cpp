#include "ClassCircle.h"
#include<iostream>


Circle::Circle() {
	std::cout << "Input radius coordinates color: ";
	std::cin >> radius >> coordinates[0] >> coordinates[1] >> color;
}

void Circle::square() {
	std::cout << "Squeare of circle: " << atan(1) * 4 * (double)radius << "\n";
}

void Circle::rectangle() {
	std::cout << "Rectangle of circle:\n";
	printRectangle(radius, radius);
}