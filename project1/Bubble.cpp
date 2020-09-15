// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley
#include "Bubble.h"

Bubble::Bubble() //default constuctor
{}

Bubble::~Bubble() //deconstructor
{}

void Bubble::sortArray(int intArray[], int length) //implementation of virtual method
{
    for(int loopVar=0; loopVar<length-1; loopVar++)//walks through array
    {
        for(int i=0; i<length-loopVar-1; i++) //loop for comparison 
        {
            if(intArray[i] < intArray[i+1]) //this is sorting in descending order
            {
                //swap
                int temp = intArray[i];
                intArray[i] = intArray[i+1];
                intArray[i+1] = temp; 
               
            }
            
        }

    }
    std::cout<<"The array was sorted using bubble sort" << std::endl;
    //    for(int step = 0; step < length; step++) // this is so I can see what's happening
    //     {
    //         std::cout<< intArray[step] << std::endl; 
    //     }
        
}
