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

		dummy = new HashNode<One, Two>(-1, -1);
	}
	~HashMap() 
	{
	
	}

private:

};
