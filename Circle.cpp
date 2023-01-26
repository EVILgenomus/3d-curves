#include "Circle.h"

Coords Circle::getPoint(double t){
	return degenerate.getPoint(t);
}

Coords Circle::getDeriv(double t) {
	return degenerate.getDeriv(t);
}

string Circle::getType(){
	return string("Circle");
}

double Circle::getRadius(){
	return degenerate.getRadiusX();
}

void Circle::setRadius(double r) {
	degenerate.setRadiusX(r);
	degenerate.setRadiusY(r);
}



