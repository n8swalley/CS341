// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards

#include "RedBlackTree.h"

// Default Constructor
RedBlackTree::RedBlackTree() : BinaryTree()
{
    
}

//inserts data into node and calls helper methods to insert into RB tree
void RedBlackTree::insert(int data)
{
    TreeNode * newNode = new TreeNode(data);
    if(newNode->getColor(newNode) == 0) // 0 is red
    {
        BinaryTree::setRoot(BinaryTree::insertNode(BinaryTree::getRoot(), newNode));
        TreeNode * root = BinaryTree::getRoot();
        balanceColor(root, newNode);
    }
}

// prints red nodes in order traversal
void RedBlackTree::printRedNodes(TreeNode * root)
{
    if (root == nullptr)
    {
        return;
    }
    else
    {
        printRedNodes(root->getLeftChild());
        if (root->getColor(root) == 0)
        {
            std::cout << root->getData() << " ";
        }
        printRedNodes(root->getRightChild());
    }
}

// prints black nodes in pre order traversal
void RedBlackTree::printBlackNodes(TreeNode * root)
{
    if (root == nullptr)
    {
        return;
    }
    else
    {
        if (root->getColor(root) == 1)
        {
            std::cout << root->getData() << " ";
        }
        printBlackNodes(root->getLeftChild());
        printBlackNodes(root->getRightChild());
    }
}

void RedBlackTree::printRootNode(TreeNode * root)
{
     if (root != nullptr && root->getColor(root) == 1)
    {
        std::cout <<"Root: " << root->getData() << std::endl;
    }
}

void RedBlackTree::rotateLeft(TreeNode *& root, TreeNode *& newNode)
{
    TreeNode * rPtr = newNode->getRightChild();
    newNode->setRightChild(rPtr->getLeftChild());
    if(newNode->getRightChild() != nullptr)
    {
        newNode->getRightChild()->setParent(newNode);
    }
    rPtr->setParent(newNode->getParent());
    if(newNode->getParent() == nullptr)
    {
        root = rPtr;
        BinaryTree::setRoot(root);
    }
    else if (newNode == newNode->getParent()->getLeftChild())
    {
        newNode->getParent()->setLeftChild(rPtr);
    }
    else
    {
        newNode->getParent()->setRightChild(rPtr);
    }
    rPtr->setLeftChild(newNode);
    newNode->setParent(rPtr); 
}

void RedBlackTree::rotateRight(TreeNode *& root, TreeNode *& newNode)
{
    TreeNode * lPtr = newNode->getLeftChild();
    newNode->setLeftChild(lPtr->getRightChild());

    if(newNode->getLeftChild() != nullptr)
    {
        newNode->getLeftChild()->setParent(newNode);
    }
    lPtr->setParent(newNode->getParent());
    if(newNode->getParent() == nullptr)
    {
        root = lPtr;
        BinaryTree::setRoot(root);
    }
    else if (newNode == newNode->getParent()->getLeftChild())
    {
        newNode->getParent()->setLeftChild(lPtr);
    }
    else
    {
        newNode->getParent()->setRightChild(lPtr);
    } 
    lPtr->setRightChild(newNode);
    newNode->setParent(lPtr); 
}

void RedBlackTree::balanceColor(TreeNode *& root, TreeNode *& newNode)
{
    TreeNode * parentNode = nullptr;
    TreeNode * grandParentNode = nullptr;
    while(newNode!=root && newNode->getColor(newNode) != 1 && newNode->getParent()->getColor(newNode->getParent()) == 0)
    {
        parentNode = newNode->getParent();
        grandParentNode = newNode->getParent()->getParent();
        if(parentNode == grandParentNode->getLeftChild())
        {
            TreeNode * uncleNode = grandParentNode->getRightChild();

            if((uncleNode != nullptr) && (uncleNode->getColor(uncleNode) == 0))
            {
                //recolor if the uncle of newNode is also red 
                grandParentNode->setColor(0); // 0 is red
                parentNode->setColor(1); // 1 is black
                uncleNode->setColor(1);
                newNode = grandParentNode;
            }
            else
            {
                if(newNode == parentNode->getRightChild())
                {
                    //left rotation needed if new node is the right child of its parent
                    rotateLeft(root, parentNode);
                    newNode = parentNode;
                    parentNode = newNode->getParent();
                }
                else
                {
                    rotateRight(root, grandParentNode);
                    bool temp = parentNode->getColor(parentNode);
                    parentNode->setColor(grandParentNode->getColor(grandParentNode));
                    grandParentNode->setColor(temp);
                    newNode = parentNode;
                } 
            }
        }
        else 
        {
            TreeNode * uncleNode = grandParentNode->getLeftChild();
            if((uncleNode != nullptr) && (uncleNode->getColor(uncleNode) == 0))
            {
                grandParentNode->setColor(0); // 0 is red
                parentNode->setColor(1); //1 is black
                uncleNode->setColor(1);
                newNode = grandParentNode;
            }
            else
            {
                if(newNode == parentNode->getLeftChild())
                {
                    rotateRight(root, parentNode);
                    newNode = parentNode;
                    parentNode = newNode->getParent();
                }
                else
                {
                    rotateLeft(root, grandParentNode);
                    bool temp = parentNode->getColor(parentNode);
                    parentNode->setColor(grandParentNode->getColor(grandParentNode));
                    grandParentNode->setColor(temp);
                    newNode = parentNode;
                } 
            }
        }
    }
    root->setColor(1); //set root to black
}

