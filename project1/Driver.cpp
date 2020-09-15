// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley
#include "Sort.h"
#include "Insertion.h"
#include "Bubble.h"

// Function for handling file output 
void outputFile(int intArray[], int lengthOfArray)
{
    std::ofstream fileToOutput; //output stream handler
    std::string nameOfOutputFile = "";  //user input variable for output file

    std::cout<<"Please enter the name of the file in which to store the sorted values: "<<std::endl;
    std::cin>>nameOfOutputFile;

    if(nameOfOutputFile != "") 
    {
        fileToOutput.open(nameOfOutputFile.c_str());
        
        if(fileToOutput.fail()) //error handling
        {
            std::cout << "Unable to output to that file" << std::endl;
        }
        else 
        {
            for(int step=0; step < lengthOfArray; step++) //walks through each value in the sorted array
            {
                if(step != lengthOfArray-1)
                {
                    fileToOutput << intArray[step] << " "; //enters a space after each value except the last
                }
                else
                {
                    fileToOutput << intArray[step];
                }
               // std::cout<<intArray[step]<<std::endl;
                
            }
        }
        fileToOutput.close();	
    }

}
// Function for handling user sort choice
void sortingChoice(int intArray[], int lengthOfArray)
{
    Bubble b; 
    Insertion i;   
    std::string sortChoice; //user choice variable for which sort to use
    
    std::cout<<"Would you like to sort using bubble sort(b) or insertion sort(i)?: "<<std::endl;
    std::cin>>sortChoice;

    if (sortChoice == "b")
    {
       // b.sortArray(intArray, lengthOfArray);//arrays are automatically passed by reference
        //outputFile(intArray, lengthOfArray);

         Bubble * b2 = new Bubble();
         b2->sortArray(intArray, lengthOfArray);
         delete b2;

     }
    else if (sortChoice =="i")
    {
        //i.sortArray(intArray, lengthOfArray); //arrays are automatically passed by reference
         Insertion * i2 = new Insertion();
         i2->sortArray(intArray, lengthOfArray);

         delete i2;
    }
    else
    {
        std::cout<<"Invalid input: please try again"<<std::endl;
        sortingChoice(intArray, lengthOfArray); //calls itself to 
    }
    outputFile(intArray, lengthOfArray);

}

// Function for handling file input
void inputFile(int intArray[], int lengthOfArray)
{
    std::ifstream fileToReadIn; //input stream handler
    std::string nameOfInputFile = ""; //user input variable for filename
    std::string string_number; //string to be converted
    std::stringstream converter; //string stream object
    converter.clear(); //some stuff for sstream
    converter.str("");
    int numberConverted; //this is the variable after the string is converted

    std::cout<<"Please enter the name of the file you'd like to read from: "<<std::endl;
    std::cin >> nameOfInputFile; // NOTE: the file being read in should have spaces inbetween the values

    if(nameOfInputFile != "") //just a simple if check to open the file once a filename is given
    {
        fileToReadIn.open(nameOfInputFile.c_str());
        
        if(fileToReadIn.fail()) //error check
        {
            std::cout << "ERROR: file not found" <<std:: endl;
            std::cout <<std::endl; // adds a space
            inputFile(intArray, lengthOfArray); // calls itself to ask the user again
        }
        else
        {
            while(!fileToReadIn.eof()) //read until the end of the file
            {
                std::getline(converter,string_number); //automatically space delimiter
                converter << string_number;
                converter >> numberConverted; //converts our string into ints
                fileToReadIn >> intArray[lengthOfArray]; //store values into array
                //std::cout << intArray[length] << std::endl; //this is so i can see whats going on
                lengthOfArray++; //counts each index
            } 
            std::cout<<"length: "<<lengthOfArray<<std::endl;
        }
        
        fileToReadIn.close();	
        sortingChoice(intArray, lengthOfArray);
    }
    
}
// Main Function
int main()
{   
    std::string runAgainChoice; //string variable to hold user input
    int lengthOfArray=0; 
    int intArray[100];
   
    inputFile(intArray, lengthOfArray); // read in values from a file; convert to ints and store in an array
     
   
    
    std::cout<<"Would you like to continue?(y/n): "<<std::endl;
    std::cin>>runAgainChoice;

    if (runAgainChoice == "y")
    {
        main(); //allows user to run through program as many times as they'd like
    }
    else if (runAgainChoice == "n")
    {
        std::cout<<"Goodbye!"<<std::endl;
    }
    else
    {
        std::cout<<"Invalid input"<<std::endl;
    }
    return 0;
}
