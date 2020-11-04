// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards

#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

#include "TreeNode.h"

class BinaryTree
{
    public:
        //Default Constuctor
        BinaryTree();

        //Destructor
        virtual ~BinaryTree();

        /**
        * Accessor method for root node
        *
        * @return TreeNode * root node
        */
        TreeNode * getRoot();

        /**
        * Mutator method for root node
        *
        * @param[in] TreeNode * root node
        */
        void setRoot(TreeNode * root);

        /**
        * creates a new TreeNode with the data and calls the insertNode method 
        *
        * @param[in] int data
        */
        virtual void insert(int data);
        
        //modeled from class example
        void printInOrder(TreeNode * root);

    private:
        //root node ptr
        TreeNode * root_;
        
    protected:
        /**
        * inserts the new node into the BST 
        *
        * @param[in] TreeNode * root node
        * @param[in] TreeNode * new node
        * @return TreeNode * inserted node
        */
        TreeNode * insertNode(TreeNode * root, TreeNode * newNode);

};
#endif