#include "ClassCircle.h"
#include<iostream>

void Circle::square() {
	std::cout << "Squeare of circle: " << atan(1) * 4 * (double)radius << "\n";
}

void Circle::rectangle() {
	std::cout << "Rectangle of circle:\n";
	printRectangle(radius, radius);
}