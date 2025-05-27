#include "ClassRectangle.h"
#include<iostream>

Rectangle::Rectangle() {
	std::cout << "Input height wegth coordinates color: ";
	std::cin >> height >> widht >> coordinates[0] >> coordinates[1] >> color;
}
void Rectangle::square() {
	std::cout << "Squeare of rectangle: " << height * widht << "\n";
}
void Rectangle::rectangle() {
	std::cout << "Rectangle of rectangle:\n";
	printRectangle(height, widht);
}