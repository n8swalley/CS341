// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley

#include "Insertion.h"

Insertion::Insertion()
{} //default constructor

Insertion::~Insertion()
{} //deconstructor

void Insertion::sortArray(int intArray[], int length)
{
    for(int i=1; i < length; i++) //Insertion sort starts at index 1
    {
        int currIndex = intArray[i]; 
        int prevIndex = i - 1;
        //sorts in decending order
        while(currIndex > intArray[prevIndex] && prevIndex >= 0) //compares currIndex with prevIndex until a larger value is found
        {
            intArray[prevIndex + 1] = intArray[prevIndex];  
            prevIndex--;
        }
        intArray[prevIndex + 1] = currIndex;
    }
    std::cout<<"The array was sorted using insertion sort" << std::endl;
}
