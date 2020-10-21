// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#include "LinkedNode.h"
#include <cstdlib>

LinkedNode::LinkedNode() : Node()
{ 
    nextNode = nullptr;
    prevNode = nullptr;
}


LinkedNode::~LinkedNode() 
{ 
    if (nextNode!=nullptr)
    {
        delete nextNode;
    }
   
   // delete prevNode;
}



