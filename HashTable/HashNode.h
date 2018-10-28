#include<iostream>
using namespace std;

template<typename One, typename Two>
class HashNode
{
	
public:
	Two value;
	One key;
	HashNode()
	{
		this->value = NULL;
		this->key = NULL;
	}
	HashNode(One key, Two value)
	{
		this->value = value;
		this->key = key;
	}
	Two GetValue()
	{
		return this->value;
	}
	One GetKey()
	{
		return this->key;
	}
	~HashNode() {}

private:

};
