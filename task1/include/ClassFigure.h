#pragma once
#include<vector>
#include<string>

class Figure
{
protected:
	std::vector<int> coordinates;
	std::string color;
public:
	Figure();
	Figure(std::vector<int>& inCoordinates, std::string& inColor);
	Figure(Figure& figure);
	std::vector<int> GetCoordinates();
	std::string GetColor();
	bool SetCoordinates(std::vector<int>& temp);
	bool SetColor(std::string& temp);
	static void printRectangle(double height, double& widht);
};