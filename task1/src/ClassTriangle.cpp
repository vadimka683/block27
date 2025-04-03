#include "ClassTriangle.h"
#include<iostream>

void Triangle::square() {
	std::cout << "Squeare of triangle: " << (double)lenght_edge * (double)lenght_edge * std::sqrt(3) / 4 << "\n";
}
void Triangle::rectangle() {
	std::cout << "Rectangle of rectangle:\n";
	printRectangle(lenght_edge * std::sqrt(3) / 2, lenght_edge);
}