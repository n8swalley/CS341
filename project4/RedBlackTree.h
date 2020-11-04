// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards

#ifndef RED_BLACK_TREE_H_
#define RED_BLACK_TREE_H_
#include "BinaryTree.h"

class RedBlackTree : public BinaryTree
{
    public:
        //Default Constuctor
        RedBlackTree();
        //Destructor
        virtual ~RedBlackTree(){};
        /**
        * Inserts data into a node and calls a helper function to insert into the RedBlack Tree
        *
        * @param[in] int data
        */
        virtual void insert(int data);
        /**
        * Prints the Red nodes using an Inorder tree traverasl
        *
        * @param[in] root TreeNode 
        */
        void printRedNodes(TreeNode * root);
        /**
        * Prints the Black nodes using a Preorder tree traverasl
        *
        * @param[in] root TreeNode 
        */
        void printBlackNodes(TreeNode * root);
        /**
        * Prints the root node
        *
        * @param[in] root TreeNode 
        */
        void printRootNode(TreeNode * root);
        

    private:
        /**
        * Rotates the nodes the the left in the RB tree
        *
        * @param[in] root TreeNode passed by pointer reference
        * @param[in] newNode TreeNode passed by pointer reference
        */
        void rotateLeft(TreeNode *& root, TreeNode *& newNode);
        /**
        * Rotates the nodes the the right in the RB tree
        *
        * @param[in] root TreeNode passed by pointer reference
        * @param[in] newNode TreeNode passed by pointer reference
        */
        void rotateRight(TreeNode *& root, TreeNode *& newNode);
        /**
        * Balances the RB tree with the correct color restraints
        *
        * @param[in] root TreeNode passed by pointer reference
        * @param[in] newNode TreeNode passed by pointer reference
        */
        void balanceColor(TreeNode *& root, TreeNode *& newNode);
};

#endif