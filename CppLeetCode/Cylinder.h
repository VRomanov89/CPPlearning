const double PI{3.1416};

class Cylinder
{
private:
    double base_radius{};
    double height{};

public:
    // Constructors
    Cylinder()
    {
        base_radius = 2.0;
        height = 1.0;
    }
    Cylinder(double rad_param, double height_param)
    {
        base_radius = rad_param;
        height = height_param;
    }
    // Functions
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }

    // Functions - Getters
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }

    // Functions - Setters
    void set_base_radius(double base)
    {
        base_radius = base;
    }
    void set_height(double hgt)
    {
        height = hgt;
    }
};