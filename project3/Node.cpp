// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards

#include "Node.h"

Node::Node(int data) : data_(data)
{

}

Node::Node() : data_(0)
{

}

void Node::setData(int data)
{
    data_ = data;
}

int Node::getData()
{
    return data_;
}
