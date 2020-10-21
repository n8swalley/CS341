// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#ifndef LINKED_NODE_H_ //preprocessor directives
#define LINKED_NODE_H_

#include "Node.h"

class LinkedNode : public Node
{
public:
    //Constructor
    LinkedNode();
    //LinkedNode(Node *nextNode, Node *prevNode);
    //Destructor
    virtual ~LinkedNode();
    LinkedNode * nextNode;
    LinkedNode * prevNode;
//     virtual void setNextNode(Node *nextNode);
//     virtual void setPrevNode(Node *prevNode);
    //virtual LinkedNode* getNext();
   // virtual Node* getPrevNode();
// private:
//     Node * nextNode_;
//     Node * prevNode_;
// protected:
//     LinkedNode(){};
};
#endif