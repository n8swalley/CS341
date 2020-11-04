// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#include "BinaryTree.h"
 #include <iostream>

//default constructor
BinaryTree::BinaryTree() : root_(nullptr)
{
   
}

BinaryTree::~BinaryTree()
{
    delete root_;
}

TreeNode * BinaryTree::getRoot()
{
    return root_;
}

void BinaryTree::setRoot(TreeNode * root)
{
    root_ = root;
}

void BinaryTree::insert(int data)
{
    TreeNode * newNode = new TreeNode(data);
    root_ = insertNode(root_, newNode); 
}

void BinaryTree::printInOrder(TreeNode * root)
{
    if (root != nullptr)
    {
        printInOrder(root->getLeftChild());
        std::cout <<root->getData() << " ";
        printInOrder(root->getRightChild());
        
    }
}

TreeNode * BinaryTree::insertNode(TreeNode * root, TreeNode * newNode)
{
    if(root == nullptr)
    {
        root = newNode;
    }
    else
    {
        if(newNode->getData() > root->getData())
        {
            //Right Subtree
            root->setRightChild(insertNode(root->getRightChild(), newNode)); 
            root->getRightChild()->setParent(root);
        }
        else if (newNode->getData() < root->getData())
        {
            //Left Subtree
            root->setLeftChild(insertNode(root->getLeftChild(), newNode));
            root->getLeftChild()->setParent(root);
        }
    }
    return root;
}
