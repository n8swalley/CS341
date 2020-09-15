// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley

// Header File for Insertion class. 
#ifndef INSERTION_SORT_ //preprocessor directives
#define INSERTION_SORT_
#include "Sort.h"

// Class Declaration 
// class DERIVED_CLASS : public BASE_CLASS (public level inheritence)
class Insertion : public Sort
{
    // Public Constructors/Destructors/Member Methods
    public:
    Insertion(); 
    virtual ~Insertion(); 
        virtual void sortArray(int intArray[], int length); //virtual method 
};
#endif
