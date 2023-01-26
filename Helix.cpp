#include "Helix.h"

Coords Helix::getPoint(double t){
	return circle.getPoint(t).setZ((t / (M_PI * 2)) * step);
}

Coords Helix::getDeriv(double t) {
	return circle.getDeriv(t).setZ(step / (M_PI * 2));
}

string Helix::getType(){ 
	return string("Helix"); 
}

void Helix::setRadius(double r) {
	circle.setRadius(r);
}