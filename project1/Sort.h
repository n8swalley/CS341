// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley
#ifndef SORT_H_ //preprocessor directives
#define SORT_H_
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
// Header File for Sort class. 
// This is an abstract base class
class Sort
{
    // Public Constructors/Destructors/Member Methods
    public:       
    	virtual ~Sort() {}
		// Member Methods
        virtual void sortArray(int intArray[], int length) = 0;
        //this is a pure virtual method;
};
#endif
