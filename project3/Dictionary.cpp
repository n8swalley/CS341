// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// n8swalley & k8edwards
#include "Dictionary.h"
Dictionary::Dictionary(int id, int data)
{
	id_=Node(id);
	data_=Node(data);
}

int Dictionary::getID()
{
	return id_.getData();
}

int Dictionary::getValue()
{
	return data_.getData();
}

//int Dictionary::newEntry(std::vector<int> duplicates, int count)
//{
//	new Node(duplicates[i]); // i think??
//	new Node(count);
	
//}

