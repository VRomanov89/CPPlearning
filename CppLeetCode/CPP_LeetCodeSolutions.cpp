#define NOMINMAX
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::max;
using std::string;
using std::vector;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) // 4. Median of Two Sorted Arrays
{
    vector<int> hold;
    for (auto num : nums1)
    {
        hold.push_back(num);
    }
    for (auto num : nums2)
    {
        hold.push_back(num);
    }
    sort(hold.begin(), hold.end());
    int n = hold.size();
    return n % 2 ? hold[n / 2] : (hold[n / 2 - 1] + hold[n / 2]) / 2.0;
}

int check(string &s, int left, int right) // 5. Longest Palindromic Substring
{
    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left - 1;
}
string longestPalindrome(string s) // 5. Longest Palindromic Substring
{
    int ans = 0;
    int st = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int len1 = check(s, i, i);
        int len2 = check(s, i, i + 1);
        int len = max(len1, len2);
        if (len > ans)
        {
            ans = len;
            st = i - (len - 1) / 2;
        }
    }
    return s.substr(st, ans);
}

int reverse(int x) // 7. Reverse Integer
{
    int rev = 0;
    while (x != 0)
    {
        int pop = x % 10;
        x /= 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
        {
            return 0;
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
        {
            return 0;
        }
        rev = rev * 10 + pop;
    }
    return rev;
}