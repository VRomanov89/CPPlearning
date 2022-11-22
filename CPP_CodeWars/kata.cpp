#include <string>
#include <cctype>
#include <stack>
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

/*
#include <string>
Problem - dif 7 / Disemvowel Trolls
*/

std::string disemvowel(const std::string &str)
{
    std::string string2;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'i' || str[i] == 'I' || str[i] == 'e' || str[i] == 'E' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
        }
        else
        {
            string2 += str[i];
        }
    }
    return string2;
    // return
}

/*
#include <stack>
Problem - dif 7 / Square Every Digit
*/

int square_digits(int num)
{
    std::stack<int> nums;
    int hold = num;
    int number = 0;
    int result = 0;
    while (hold > 0)
    {
        nums.push(hold % 10);
        hold = hold / 10;
    }
    while (!nums.empty())
    {
        number = nums.top();
        nums.pop();
        number = number * number;
        if (number > 10)
        {
            result = result * 100;
        }
        else
        {
            result = result * 10;
        }
        result = result + number;
    }
    return result;
}