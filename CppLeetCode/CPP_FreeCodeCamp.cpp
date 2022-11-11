// Practice of https://www.youtube.com/watch?v=8jLOx1hD3_o&t=2424s
#include <iostream>

void say_age(int *age)
{
    ++(*age);
    std::cout << "Hello" << *age << "Test";
}