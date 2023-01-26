#pragma once

#include "Ellipse.h"

class Circle : public BaseCurve {
protected:
    Ellipse degenerate;
public:
    Circle() : degenerate(0, 0) {}
    explicit Circle(double r) : degenerate(r, r) {}
    ~Circle() {};
    Coords getPoint(double t);
    Coords getDeriv(double t);
    string getType();
    void setRadius(double r);
    double getRadius();
};

