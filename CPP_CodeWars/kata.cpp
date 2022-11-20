#include <string>
#include <cctype>
using namespace std;

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

/*
#include <string>
using namespace std;
Problem - Reversed Strings
*/

string reverseString(string str)
{
    // your Code is Here ... enjoy !!!
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }
    return rev;
}

/*
#include <string>
using namespace std;
Problem - dif 7 / Vowel Count
*/

int getCount(const string &inputStr)
{
    int num_vowels = 0;
    // your code here
    for (int i = 0; i < inputStr.length(); i++)
    {
        if (inputStr[i] == 'a' || inputStr[i] == 'e' || inputStr[i] == 'i' || inputStr[i] == 'o' || inputStr[i] == 'u')
        {
            num_vowels++;
        }
    }
    return num_vowels;
}