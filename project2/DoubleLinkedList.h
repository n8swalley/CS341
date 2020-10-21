// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#ifndef DOUBLE_LINKED_LIST_H_
#define DOUBLE_LINKED_LIST_H_

#include "LinkedList.h"

class DoubleLinkedList : public LinkedList
{

public:
    /// Constructor
    DoubleLinkedList();

    /// Virtual Destructor
    virtual ~DoubleLinkedList() {}

    // Overriden Inherited Methods

    /// Prints the Doubly Linked List
    virtual void printList();

    /**
    * Inserts a LinkedNode into the Doubly Linked List.
    *
    * @param[in] LinkedNode * Existing LinkedNode
    * @param[in] Integer Data Element
    */
    virtual void insertLinkedNode(LinkedNode * node, int data);

    // Helper Methods

    /**
    * Inserts a new LinkedNode after an existing LinkedNode in
    * the Doubly Linked List.
    *
    * @param[in] LinkedNode * Existing LinkedNode
    * @param[in] Integer Data Element
    */
    void insertAfterLinkedNode(LinkedNode * node, int data);

    /**
    * Inserts a new LinkedNode before an existing LinkedNode in
    * the Doubly Linked List.
    *
    * @param[in] LinkedNode * Existing LinkedNode
    * @param[in] Integer Data Element
    */
    void insertBeforeLinkedNode(LinkedNode * node, int data);

};
#endif