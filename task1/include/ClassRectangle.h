#pragma once
#include<ClassFigure.h>
class Rectangle : public Figure 
{
private:
	double height, widht;
public:
	Rectangle();
	void square();
	void rectangle();
};