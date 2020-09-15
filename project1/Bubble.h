// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley

// Header File for Bubble class.
#ifndef BUBBLE_SORT_ //preprocessor directives
#define BUBBLE_SORT_
#include "Sort.h"

// Class Declaration 
// class DERIVED_CLASS : public BASE_CLASS (public level inheritence)
class Bubble : public Sort
{
    public:
        Bubble(); 
        virtual ~Bubble();
            virtual void sortArray(int intArray[], int length);//virtual method

};
#endif
