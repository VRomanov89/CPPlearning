class Cylinder
{
private:
    double base_radius{};
    double height{};

public:
    // Constructors
    Cylinder() = default;
    Cylinder(double rad_param, double height_param);

    // Functions
    double volume();

    // Functions - Getters
    double get_base_radius();
    double get_height();

    // Functions - Setters
    void set_base_radius(double base);
    void set_height(double hgt);
};