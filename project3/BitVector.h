// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#ifndef BIT_VECTOR_H_
#define BIT_VECTOR_H_
#include <iostream>
#include <bitset>
#include <string>
#include <vector>
class BitVector
{
    public:
        BitVector(){};
        /**
        * Constructor: Creates a BitVector and initilazes the vector to store the data
        *
        * @param[in] vector<int> * Existing data
        */
        BitVector(int arraySize);

        //Deconstructor
<<<<<<< HEAD
        virtual ~BitVector();
=======
        virtual ~BitVector() 
>>>>>>> f8efecae3da535a16e90ce7d8df99c91b6bcaa52

        /**
        * Gets the bit at the given position
        *
        * @param[in] position of type int
        * @return T/F
        */ 
        bool getBit(int position);

        /**
        * Sets the bit at the given position
        *
        * @param[in] position of type int
        */ 
        void setBit(int position);

        /**
        * Identify the duplicates via our bit vector and store the list in another vector
        *
        * @param[in] vector of type int to store data
        * @param[in] vector of type int to store duplicates
        */ 
        void findDuplicates(std::vector<int> bits, std::vector<int> & duplicates);

    private:
        //This will hold the data from the txt file
        int * data;
    // protected:
    //     //Default Constructor
    //     BitVector();
        
};
#endif
