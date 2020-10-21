// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#ifndef LIST_H_ //preprocessor directives
#define LIST_H_
#include <iostream>

class List
{
public:
    /// Destructor
    virtual ~List() {}

    /**
    * Check to see if the List is empty.
    *
    * @return T/F
    */
    virtual bool isEmpty() = 0;

    /**
    * Gets the length of the List.
    *
    * @return Integer
    */
    virtual int getLength() = 0;

    /**
    * Assignment operation
    *
    * @param[in] element Data Element (Integer)
    */
    virtual void insert(int element) = 0;

    /// Prints the List
    virtual void printList() = 0;

    protected:
    // Because this is a Pure Virtual (Abstract) Class we want to
    // prevent someone from trying to use it directly.

    /// Constructor
    List() {}

};
#endif