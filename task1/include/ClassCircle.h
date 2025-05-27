#pragma once
#include "ClassFigure.h"

class Circle : public Figure {
private:
	double radius;
public:
	Circle();
	void square();
	void rectangle();
};