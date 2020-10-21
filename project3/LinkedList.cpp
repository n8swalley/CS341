// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards

#include "LinkedList.h"

LinkedList::LinkedList() 
{
    head = nullptr;
    tail = nullptr;    

}

LinkedList::~LinkedList()
{
    if (head!=nullptr)
    {
        delete head;
    }
}

LinkedNode* LinkedList::getHead()
{
    return head;
}

LinkedNode* LinkedList::getTail()
{
    return tail;
}
void LinkedList::setHead(LinkedNode* node)
{
    head = node;
}

void LinkedList::setTail(LinkedNode* node)
{
    tail = node;
}


bool LinkedList::isEmpty()
{
    if(head==nullptr) //if head is null, no node in list
    {
        return true;
    }
    else
    {
        return false;
    }
}


void LinkedList::insert(int element)
{
    LinkedNode* node = new LinkedNode;
    node->data = element;
    head->prevNode = node;
    node->nextNode = head;
    head=node;
}

int LinkedList::getLength()
{
    int length(0);
    LinkedNode* currPtr = getHead(); 
    while(currPtr!= nullptr)
    {
        length++;
        currPtr = currPtr->nextNode;
    }
    return length;
}
