// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards

#include "BitVector.h"

BitVector::BitVector(int arraySize) 
{
    data = new int[(arraySize >> 5) + 1];
}
Bitvector::~Bitvector(){
    delete[] data_;
}

bool BitVector::getBit(int position) 
{
    int index = (position >> 5);
    return (data[index] & (1<<position)) != 0;
}

void BitVector::setBit(int position)
{
    int index = (position >> 5);
    data[index] |= (1 << position);
    //std::cout<<"here!"<<std::endl;
}

BitVector::~BitVector()
{
	delete data;
}

void BitVector::findDuplicates(std::vector<int> data, std::vector<int> & duplicates)
{
    // int check = 0;
    // for(int i=0; i< data.size(); ++i)
    // {
    //     int index = data[i] - 1;
    //     if ((check & (1 << index)) > 0)
    //     {
    //         duplicates.push_back(data[i]);
    //     }
    //     check |= (1<< index);
    // }
    //BitVector b = BitVector(320000);

    for (int i=0; i<data.size(); i++)
    {
        int value = data[i];

        if(getBit(value))
        {
            std::cout<< "Repeats: " << value << std::endl;
            duplicates.push_back(data[i]);
        }
        else
        {
            setBit(value);
        }
    }
}

    
