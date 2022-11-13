#include "CPP_LinkedList.h"

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