#include "Ellipse.h"

Ellipse::Ellipse() {
	this->radX = 0;
	this->radY = 0;
}

Ellipse::Ellipse(double rX, double rY){
	if (rX < 0 || rY < 0) {
		throw runtime_error("Radius must be positive!");
	}
	this->radX = rX;
	this->radY = rY;
}

Coords Ellipse::getPoint(double t) {
	return Coords(radX * cos(t), radY * sin(t), 0);
}

Coords Ellipse::getDeriv(double t) {
	return Coords(-radX * sin(t), radY * cos(t), 0);
}

void Ellipse::setRadiusX(double rX) {
	if (rX < 0) {
		throw runtime_error("Radius must be positive!");
	}
	this->radX = rX;
}

void Ellipse::setRadiusY(double rY) {
	if (rY < 0) {
		throw runtime_error("Radius must be positive!");
	}
	this->radY = rY;
}

string Ellipse::getType(){
	return string("Ellipse");
}

double Ellipse::getRadiusX() { 
	return radX; 
}

double Ellipse::getRadiusY() { 
	return radY; 
}