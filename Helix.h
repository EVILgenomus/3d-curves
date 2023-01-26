#pragma once
#include "Circle.h"

#define _USE_MATH_DEFINES
#include <math.h>

class Helix : public BaseCurve {
protected:
    Circle circle;
    double step;
public:
    Helix() : circle(0), step(0) {};
    Helix(double r, double s) : circle(r), step(s) {};
    ~Helix() {};
    Coords getPoint(double t);
    Coords getDeriv(double t);
    void setRadius(double r);
    string getType();
};

