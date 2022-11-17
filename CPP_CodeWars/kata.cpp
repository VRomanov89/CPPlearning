#include <string>
#include <cctype>

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

/*
#include <string>
#include <cctype>
Problem - Is it a palindrome?
*/
bool isPalindrom(const std::string &str)
{
    int length = str.length();
    for (int i = 0; i < length / 2 - 1; i++)
    {
        if (tolower(str[i]) != tolower(str[length - i - 1]))
        {
            return false;
        }
    }
    return true;
}