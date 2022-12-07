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

/*
#include <string>
Problem - dif 7 / Highest and Lowest
*/

std::string highAndLow(const std::string &numbers)
{
    // your code here
    std::string temp;

    int num = 0;
    int reset = 1;
    int pos = 0;
    while (numbers[pos] != ' ')
    {
        pos++;
    }
    if (numbers[0] == '-')
    {
        num = -1 * std::stoi(numbers.substr(1, pos - 1));
    }
    else
    {
        num = std::stoi(numbers.substr(0, pos));
    }
    int min = num;
    int max = num;
    for (int i = 0; i < numbers.length(); i++)
    {
        if (numbers[i] == ' ')
        {
            if (reset != i)
            {
                if (numbers[reset + 1] == '-')
                {
                    num = -1 * std::stoi(numbers.substr(reset + 2, i - reset));
                }
                else
                {
                    num = std::stoi(numbers.substr(reset + 1, i - reset));
                }
                reset = i;
            }
        }
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }
    pos = numbers.length() - 1;
    while (numbers[pos] != ' ')
    {
        pos--;
    }
    if (numbers[pos + 1] == '-')
    {
        num = -1 * std::stoi(numbers.substr(pos + 1, numbers.length() - 1));
    }
    else
    {
        num = std::stoi(numbers.substr(pos + 1, numbers.length() - 1));
    }
    if (num > max)
    {
        max = num;
    }
    if (num < min)
    {
        min = num;
    }

    temp = std::to_string(max) + ' ' + std::to_string(min);

    return temp;
}

/*
Problem - dif 7 / Get the Middle Character
*/

std::string get_middle(std::string input)
{
    // return the middle character(s)
    if (input.length() % 2 == 0)
    {
        return input.substr(input.length() / 2 - 1, 2);
    }
    else
    {
        return input.substr(input.length() / 2, 1);
    }
}

/*
#include <vector>
Problem - dif 7 / Find Count of Most Frequent Item in an Array
*/

unsigned int most_frequent_item_count(const std::vector<int> &collection)
{
    // your code here
    int sumMax = 0;
    int sum = 0;
    for (int i = 0; i < collection.size(); i++)
    {
        for (int j = i; j < collection.size(); j++)
        {
            if (collection[i] == collection[j])
            {
                sum++;
            }
        }
        if (sum > sumMax)
        {
            sumMax = sum;
        }
        sum = 0;
    }
    return sumMax;
}

/*
Problem - dif 7 / Exes and Ohs
*/

bool XO(const std::string &str)
{
    // your code here
    int x = 0, o = 0;
    for (unsigned long i = 0; i < str.size(); i++)
    {
        if (str[i] == 'x' || str[i] == 'X')
        {
            x++;
        }
        else if (str[i] == 'o' || str[i] == 'O')
        {
            o++;
        }
    }
    if (x == o)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
Problem - dif 7 / Beginner Series #3 Sum of Numbers
*/

int get_sum(int a, int b)
{
    int sum = 0;
    int small, big;
    if (a > b)
    {
        big = a;
        small = b;
    }
    else
    {
        big = b;
        small = a;
    }
    for (int i = small; i <= big; i++)
    {
        std::cout << i;
        sum += i;
    }
    return sum;
    // Good luck!
}

/*
Problem - dif 7 / Is this a triangle?
*/

namespace Triangle
{
    bool isTriangle(int a, int b, int c)
    {
        long aa = a, bb = b, cc = c;
        if (aa + bb > cc && aa + cc > bb && bb + cc > aa)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};