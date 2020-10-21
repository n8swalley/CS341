// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards

#include "DoubleLinkedList.h"

    /// Constructor
DoubleLinkedList::DoubleLinkedList() : LinkedList()
{

}

void DoubleLinkedList::insertLinkedNode(LinkedNode * node, int data)
{
    LinkedNode* newNode = new LinkedNode;
    newNode->data = data;
    newNode->prevNode = tail;
    newNode->nextNode = nullptr;
    
    if(tail == nullptr)
    {
        head = newNode;
    }
    else
    {
        tail ->nextNode = newNode;
    }
    
    tail = newNode;   
}

void DoubleLinkedList::insertAfterLinkedNode(LinkedNode * node, int data)
{
    LinkedNode* newNode = new LinkedNode;
    newNode->data=data; 
    newNode->nextNode = node -> nextNode;
    newNode->prevNode = node;
    node->nextNode->prevNode = node;
    node->nextNode = newNode;
    if(node->nextNode == nullptr) //takes care of case where you insert before the first node
    {
        tail = newNode;
    }
}
    
void DoubleLinkedList::insertBeforeLinkedNode(LinkedNode * node, int data)
{
    LinkedNode* newNode = new LinkedNode;
    newNode->data=data; 
    newNode->nextNode = node;
    newNode->prevNode = node->prevNode;
    node -> prevNode -> nextNode = newNode;
    node->prevNode = newNode;
    if(node->prevNode == nullptr) //takes care of case where you insert before the first node
    {
        head = newNode;
    }
}


void DoubleLinkedList::printList()
{
    LinkedNode* currPtr = head;
    while(currPtr != nullptr)
    {
        std::cout<< currPtr->data <<std::endl;
        currPtr = currPtr->nextNode;
    }

 
}
