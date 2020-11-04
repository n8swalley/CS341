// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards

#include "RedBlackTree.h"
#include <fstream>

int main()
{
    RedBlackTree RBtree;
    //BinaryTree tree;
    std::ifstream fileToReadIn; //input stream handler
    std::string nameOfInputFile = ""; //user input variable for filename
    std::cout<<"Please enter the filname to make a red black tree: "<<std::endl;
    std::cin >> nameOfInputFile; 
    fileToReadIn.open(nameOfInputFile.c_str());
    if(fileToReadIn.fail()) //error check
    {
        std::cout << "ERROR: file not found" <<std:: endl;
    }
    else
    {
        int value(0);
        while(!fileToReadIn.eof())
        {
            fileToReadIn >> value;
            RBtree.insert(value);
        } 
    }
    //std::cout<<"Binary Tree: ";
    //tree.printInOrder(tree.getRoot());
    //std::cout<<std::endl;
    std::cout<<"Red Nodes: ";
    RBtree.printRedNodes(RBtree.getRoot());
    std::cout<<std::endl;
    std::cout<<"Black Nodes: ";
    RBtree.printBlackNodes(RBtree.getRoot());
    std::cout<<std::endl;
    RBtree.printRootNode(RBtree.getRoot());
    return 0;
}