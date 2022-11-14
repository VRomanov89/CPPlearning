// START ------>>> LinkedList Node Class

class LLNode
{
private:
    int l_data;

public:
    LLNode(int data);
    LLNode *next;
    int getData();
    void setData(int data);
};

// END ------>>> LinkedList Node Class

// START ------>>> LinkedList  Class

class LinkedList
{
private:
    int size;
    LLNode *head;
    LLNode *tail;

public:
    LinkedList(int data);
    void addNode(int data);
};

// END ------>>> LinkedList  Class
