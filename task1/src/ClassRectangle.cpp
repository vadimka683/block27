#include "ClassRectangle.h"
#include<iostream>

void Rectangle::square() {
	std::cout << "Squeare of rectangle: " << height * widht << "\n";
}
void Rectangle::rectangle() {
	std::cout << "Rectangle of rectangle:\n";
	printRectangle(height, widht);
}