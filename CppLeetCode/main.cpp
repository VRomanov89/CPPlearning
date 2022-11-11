// g++ main.cpp CPP_FreeCodeCamp.cpp -o main

#include <iostream>
#include <unordered_map>
#include "CPP_FreeCodeCamp.h" // Practice of https://www.youtube.com/watch?v=8jLOx1hD3_o&t=2424s

using namespace std;

// START ------>>> Linked List Implementation
class Node
{
public:
    int data;   // The contents of the node.
    Node *next; // The pointer to the next node.
    Node()      // CONSTRUCTOR - No data; default = 0s.
    {
        data = 0;
        next = NULL;
    }
    Node(int data) // CONSTRUCTOR - With data.
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head; // The list has a head node.

public:
    LinkedList() // CONSTRUCTOR - No head node.
    {
        head = NULL;
    }
    void insertNode(int);
    void printList();
    void deleteNode(int);
};

void LinkedList::deleteNode(int nodeOffset) // FUNCTION - Delete a node at a specific offset.
{
    Node *temp1 = head; // Pointer to the head of the list.
    Node *temp2 = NULL; // Empty pointer?
    int ListLen = 0;

    if (head == NULL) // The list is empty when the head is NULL.
    {
        cout << "List is Empty!" << endl;
        return;
    }

    while (temp1 != NULL) // Traverse the list to find the length?
    {
        temp1 = temp1->next;
        ListLen++;
    }

    if (ListLen < nodeOffset) // If the offset of the node to delete is greater than the length of the list, the request is out of bounds.
    {
        cout << "Index Out of Range!" << endl;
        return;
    }

    temp1 = head; // temp1 point to the head again.

    if (nodeOffset == 1) // Delete the first node of the list.
    {
        head = head->next;
        delete temp1;
        return;
    }

    while (nodeOffset-- > 1) // Traverse the list until the "offset" node is found in the list.
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    temp2->next = temp1->next; // Redirect the pointer of the nodes to "remove" the node.
    delete temp1;
}

void LinkedList::insertNode(int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::printList()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List Empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// END ------>>> Linked List Implementation

// START ------>>> Binary Tree Implementation

class BSTNode
{
public:
    BSTNode *left;
    BSTNode *right;
    int data;

    BSTNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void BSTInsert(BSTNode *root, int data)
{
}

// END ------>>> Binary Tree Implementation

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
    // Solutions sol;
    //  cout << sol.romanToInt("XXX");
    int age{23};
    cout << age << endl;
    say_age(&age);
    cout << age << endl;
}