#include <string>

std::string even_or_odd(int number)
{
    if (number % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

unsigned long long get_sum(unsigned int n) // Summation Triangle #1 https://www.codewars.com/kata/6357825a00fba284e0189798/train/cpp
{
    unsigned long long sum = 0;
    // your code here
    for (unsigned int i = 0; i <= n; i++)
    {
        for (unsigned int j = 0; j <= i; j++)
        {
            sum = sum + 2 * j + i + 1;
        }
    }

    return sum;
}