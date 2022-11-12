// Practice of https://www.youtube.com/watch?v=8jLOx1hD3_o&t=2424s

void say_age(int *age);

// Lambda Functions
/*
[capture list] (params) -> return type {
    function body
}


*/

// Classes - 20:15:50

class Cylinder
{
public:
    double radius = 2.0;
    double height = 2.0;

    double volume()
    {
        return 3.14 * radius * radius * height;
    }
};