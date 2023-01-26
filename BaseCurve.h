#pragma once
#include <string>
#include <iostream>
#include "Coords.h"

using namespace std;

class BaseCurve
{
public:
    virtual ~BaseCurve() {};
    virtual Coords getPoint(double t) = 0;
    virtual Coords getDeriv(double t) = 0;
    virtual string getType() = 0;
};

