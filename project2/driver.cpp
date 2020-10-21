// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#include "DoubleLinkedList.h"
#include <fstream>

int main()
{
    DoubleLinkedList a;
    int hops(0); //hop counter variable
    std::ifstream fileToReadIn; //input stream handler
    std::string nameOfInputFile = ""; //user input variable for filename

    std::ofstream fileToOutput; //output stream handler
    std::string nameOfOutputFile = ""; //filename for output
    
    std::cout<<"Please enter the filname to make a DLL: "<<std::endl;
    std::cin >> nameOfInputFile; 
    
    fileToReadIn.open(nameOfInputFile.c_str());
    if(fileToReadIn.fail()) 
    {
        std::cout << "ERROR: file not found" <<std:: endl;
    }
    else
    {
        int value(0); // variable to store ints as they're read in from the file
        while(!fileToReadIn.eof())
        {
            LinkedNode* node = a.getHead();
            fileToReadIn >> value;
            a.insertLinkedNode(node, value); //inserts at tail;
        } 
    }   
    fileToReadIn.close();	
    //a.printList();
        
    std::cout<<"Please enter the filname to insert values into a DLL: "<<std::endl;
    std::cin >> nameOfInputFile; 

    fileToReadIn.open(nameOfInputFile.c_str());
    if(fileToReadIn.fail()) 
    {
        std::cout << "ERROR: file not found" <<std:: endl;
    }
    else
    {
        int insertValue(0);
        while(!fileToReadIn.eof())
        {
           
            LinkedNode* headPtr = a.getHead(); 
            LinkedNode* tailPtr = a.getTail();  
            LinkedNode* temp1 = a.getHead();
            LinkedNode* temp2 = a.getTail();
            LinkedNode* newNode = a.getHead(); 
            
            int headhops(0);
            int tailhops(0);

            fileToReadIn >> insertValue;

            if(insertValue <= headPtr->data) // insert at head if value is less than data at head
            {
                headhops++;
                a.insert(insertValue);
            }
            else if(insertValue >= tailPtr -> data) // insert at tail if value is greater than data at tail
            {
                tailhops++;
                a.insertLinkedNode(tailPtr, insertValue);
            }
            else  
            {
                while(insertValue>= temp1->data) //walks through DLL to calculate headhops
                {   
                    if(insertValue < temp1-> data )
                    {
                        temp1 = temp1-> prevNode;
                        //headhops++;
                        break; 
                    }
                    
                    temp1 = temp1->nextNode; 
                    headhops++;
                }
                        
                while(insertValue <= temp2->data) //walks through DLL to caluclate tailhops
                {
                    
                    if(insertValue > temp2->data)
                    {
                        temp2 = temp2-> nextNode;
                        //tailhops++;
                        break;
                    }
                    temp2 = temp2-> prevNode;
                    tailhops++;
                }

                if (headhops<=tailhops)
                {
                    a.insertBeforeLinkedNode(temp1, insertValue);
                    hops=hops+headhops; 
                   
                }
                if (tailhops<=headhops)
                {
                    a.insertBeforeLinkedNode(temp1, insertValue);
                    hops=hops+tailhops;     

                }
            }
            
        }
    }
    fileToReadIn.close();
    //a.printList(); 

    std::cout<<"Please enter the output filname: "<<std::endl;
    std::cin >> nameOfOutputFile; 
    
    fileToOutput.open(nameOfOutputFile.c_str());
    
    if(fileToOutput.fail())
    {
        std::cout << "ERROR" << std::endl;	
    }
    else 
    {
        LinkedNode* currPtr = a.getHead();
        while(currPtr != nullptr)
        {
            fileToOutput << currPtr->data << " ";
            currPtr = currPtr->nextNode;
        }
        
    }
    fileToOutput.close();

    fileToOutput.open("README.txt", std::ios_base::app); //stores hop count for each test

    if(fileToOutput.fail())
    {
        std::cout << "ERROR" << std::endl;	
    }
    else 
    {
        fileToOutput << "Total Number of Big Dawg Hops: " << hops <<std::endl;
    }
    fileToOutput.close();
    //a.printList(); 
    return 0;
}



