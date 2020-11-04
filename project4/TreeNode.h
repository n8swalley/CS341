// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards

#ifndef TREE_NODE_H_
#define TREE_NODE_H_

#include "Node.h"

class TreeNode : public Node
{
    public:
        /**
        * Constructor: Creates a TreeNode and initializes the data 
        *
        * @param[in] int data
        */
        TreeNode(int data);
    
        //Destructor
        virtual ~TreeNode();

        //returns the parent node
        TreeNode * getParent();

        /**
        * sets the parent node
        *
        * @param[in] TreeNode * parent
        */
        void setParent(TreeNode * parent);

        //returns left child node
        TreeNode * getLeftChild();

         /**
        * sets the left child node
        *
        * @param[in] TreeNode * leftChild
        */
        void setLeftChild(TreeNode * leftChild);

        //returns the right child node
        TreeNode * getRightChild();

        /**
        * sets the right child node
        *
        * @param[in] TreeNode * rightChild
        */
        void setRightChild(TreeNode * rightChild);

        /**
        * sets the color of the node to the int value of color
        *
        * @param[in] int color
        */
        void setColor(int color);
        
        /**
        * returns the color of the node black(1) or red(0)
        *
        * @param[in] TreeNode * node
        * @return color (0 or 1)
        */
        bool getColor(TreeNode * node);


    private:
        //Default Constuctor
        TreeNode();
        //parent node ptr
        TreeNode * parent_;
        //left child ptr
        TreeNode * leftChild_;
        //right child ptr
        TreeNode * rightChild_;
        //color value initialized red in constructor 
        bool color_;
};
#endif