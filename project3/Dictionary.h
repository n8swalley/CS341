// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#ifndef DICTIONARY_H_
#define DICTIONARY_H_
#include "Node.h"
#include <vector>
class Dictionary : public Node
{
    public:
        //Default constructor 
        Dictionary(){};
	Dictionary(int id, int data);

        //Deconstuctor
        virtual ~Dictionary() {}

        //virtual void newEntry(std::vector<int> duplicates, int count);
	int getID();
	int getValue();
    private:
        //this will hold number entry
        Node id_;

        // this will hold the frequency value
        Node data_;
};
#endif
