// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#include <bitset>
#include <string>
#include <vector>

class Node 
{
    public: 
        Node();
        Node(int data); 
        virtual ~Node() {}; 
        virtual void setData(int data);
        virtual int getData();
    private:
        int data_;
    //protected:
        
};   
#endif
