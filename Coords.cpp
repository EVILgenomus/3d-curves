#include "Coords.h"

std::ostream& operator<< (std::ostream& out, const Coords& coords)
{
    out << "(" << coords.x << ", " << coords.y << ", " << coords.z << ')';
    return out;
}

Coords::Coords()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Coords::Coords(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Coords& Coords::setX(double x){
    this->x = x;
    return *this;
}

Coords& Coords::setY(double y){
    this->y = y;
    return *this;
}

Coords& Coords::setZ(double z){
    this->z = z;
    return *this;
}
