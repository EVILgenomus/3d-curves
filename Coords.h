#pragma once
#include <string>
#include <iostream>

class Coords{
	double x, y, z;
public:
	Coords();
	Coords(double x, double y, double z);
	~Coords() {};
	Coords& setX(double x);
	Coords& setY(double y);
	Coords& setZ(double z);
	friend std::ostream& operator<< (std::ostream& out, const Coords& coords);
};

