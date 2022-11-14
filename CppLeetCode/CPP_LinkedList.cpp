#include "CPP_LinkedList.h"

// START ------>>> LinkedList Node Class

LLNode::LLNode(int data)
{
    setData(data);
}

int LLNode::getData()
{
    return l_data;
}
void LLNode::setData(int data)
{
    l_data = data;
}

// END ------>>> LinkedList Node Class

// START ------>>> LinkedList  Class

LinkedList::LinkedList(int data)
{
    new LLNode(data);
}

// END ------>>> LinkedList  Class
