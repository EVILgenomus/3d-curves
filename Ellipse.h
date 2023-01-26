#pragma once
#include "BaseCurve.h"

class Ellipse : public BaseCurve {
protected:
    double radX;
    double radY;
public:
    Ellipse();
    Ellipse(double rX, double rY);

    ~Ellipse() {};

    Coords getPoint(double t);
    Coords getDeriv(double t);
    void setRadiusX(double rX);
    void setRadiusY(double rY);
    string getType();
    double getRadiusX();
    double getRadiusY();
};

