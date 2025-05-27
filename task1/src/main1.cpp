#include<string>
#include<iostream>
#include "ClassCircle.h"
#include "ClassTriangle.h"
#include "ClassSquare.h"
#include "ClassRectangle.h"

int main()
{
	do {
		int answer;
		std::cout << "Input number comand: 1.circle, 2.square, 3.triangle, 4.rectangle, 5.exit ";
		std::cin >> answer;
		if (answer == 1) {
			Circle* circle = new Circle();
			circle->rectangle();
			circle->square();
		}else if(answer == 2) {
			Square* square = new Square();
			square->rectangle();
			square->square();
		}
		else if (answer == 3) {
			Triangle* triangle = new Triangle();
			triangle->rectangle();
			triangle->square();
		}
		else if (answer == 4) {
			Rectangle* rectangle = new Rectangle();
			rectangle->rectangle();
			rectangle->square();
		}
		else if (answer == 5){
			return 0;
		}
	} while (true);
}
