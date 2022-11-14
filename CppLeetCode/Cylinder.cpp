#include "constants.h"
#include "Cylinder.h"

Cylinder::Cylinder(double rad_param, double height_param)
{
    base_radius = rad_param;
    height = height_param;
}

double Cylinder::volume()
{
    return PI * base_radius * base_radius * height;
}

// Functions - Getters
double Cylinder::get_base_radius()
{
    return base_radius;
}
double Cylinder::get_height()
{
    return height;
}

// Functions - Setters
void Cylinder::set_base_radius(double base)
{
    base_radius = base;
}
void Cylinder::set_height(double hgt)
{
    height = hgt;
}