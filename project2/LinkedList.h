// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#ifndef LINKED_LIST_H_ //preprocessor directives
#define LINKED_LIST_H_

#include "List.h"
#include "LinkedNode.h"

class LinkedList : public List
{
public:
    LinkedList();
    virtual ~LinkedList();
    LinkedNode * head;
    LinkedNode * tail;
    virtual LinkedNode* getHead();
    virtual LinkedNode* getTail();
    virtual void setHead(LinkedNode* node);
    virtual void setTail(LinkedNode* node);
    virtual void insert(int element);
    //virtual void printList();
    virtual bool isEmpty();
    virtual int getLength();



};
#endif