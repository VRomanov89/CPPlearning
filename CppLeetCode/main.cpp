#include <iostream>
#include <unordered_map>
using namespace std;

struct ListNode // 2. Add Two Numbers
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// create a class
class Solutions
{

public:
    int romanToInt(string s); // 13. Roman to Integer
};

int Solutions::romanToInt(string s) // 13. Roman to Integer
{
    unordered_map<char, int> mp{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]] < mp[s[i + 1]])
            ans -= mp[s[i]];
        else
            ans += mp[s[i]];
    }
    return ans;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) // 2. Add Two Numbers
{
    ListNode *myList = new ListNode(0);
    ListNode *current = myList;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry != 0)
    {
        int x = l1 ? l1->val : 0;
        int y = l2 ? l2->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
        l1 = l1 ? l1->next : nullptr;
        l2 = l2 ? l2->next : nullptr;
    }
    return myList->next;
}

int firstBadVersion(int n) // 278. First Bad Version
{ 
    int st = 1;
    int end = n;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (/*isBadVersion(mid) == */ false)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return st;
}

int mySqrt(int x) // 69. Sqrt(x)
{ 
    int i = 0;
    int j = x;
    int ans;
    while (i <= j)
    {
        long long int mid = i + (j - i) / 2;
        if (mid * mid == x)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < x)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return ans;
}

int main()
{
    Solutions sol;
    cout << sol.romanToInt("XXX");
}