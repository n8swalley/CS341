// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#include "TreeNode.h"

//default constuctor
TreeNode::TreeNode()
{

}
//destuctor 
TreeNode::~TreeNode()
{
    delete leftChild_;
    delete rightChild_;

}

TreeNode::TreeNode(int data) : Node(data), parent_(nullptr), leftChild_(nullptr), rightChild_(nullptr), color_(0) // initialize node to red
{

}

TreeNode * TreeNode::getParent()
{
    return parent_;
}

void TreeNode::setParent(TreeNode * parent)
{
    parent_ = parent;
}

TreeNode * TreeNode::getLeftChild()
{
    return leftChild_;
}

void TreeNode::setLeftChild(TreeNode * leftChild)
{
    leftChild_ = leftChild;
}

TreeNode * TreeNode::getRightChild()
{
    return rightChild_;
}

void TreeNode::setRightChild(TreeNode * rightChild)
{
    rightChild_ = rightChild;
}

void TreeNode::setColor(int color)
{
    color_ = color;
}

bool TreeNode::getColor(TreeNode * node)
{
    return color_;
}
