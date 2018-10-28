#pragma once
#include"HashNode.h"
using namespace std;

template<typename One, typename Two>
class HashMap
{
	HashNode <One, Two> **arr;
	int capacity;
	int size;
	HashNode<One, Two> *dummy;

public:
	HashMap() 
	{
		capacity = 20;
		size = 0;
		arr = new HashNode<One, Two>*[capacity];
		for (int i = 0; i < capacity; i++)
		{
			arr[i] = NULL;
		}

		dummy = new HashNode<One, Two>(-1, " ");
	}
	int HashCode(One key) 
	{
		return key % capacity;
	}
	void Insert(One key, Two value) 
	{
		HashNode<One,Two> *temp = new HashNode<One, Two>(key, value);

		// Apply hash function to find index for given key 
		int hashIndex = HashCode(key);

		//find next free space  
		while (arr[hashIndex] != NULL && arr[hashIndex]->key != key && arr[hashIndex]->key != -1)
		{
			hashIndex++;
			hashIndex %= capacity;
		}

		//if new node to be inserted increase the current size 
		if (arr[hashIndex] == NULL || arr[hashIndex]->key == -1) 
		{
			size++;
		}
		arr[hashIndex] = temp;
	
	}

	//Return current size  
	int sizeofMap()
	{
		return size;
	}

	//Return true if size is 0 
	bool isEmpty()
	{
		return size == 0;
	}

	//Function to display the stored key value pairs 
	void display()
	{
		for (int i = 0; i<capacity; i++)
		{
			if (arr[i] != NULL && arr[i]->key != -1) 
			{
				cout << "key = " << arr[i]->key	<< "  value = " << arr[i]->value << endl;
			}
				
		}
	}
	~HashMap() 
	{
	
	}

private:

};
