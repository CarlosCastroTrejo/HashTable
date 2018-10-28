#include<iostream>
using namespace std;

template<typename One, typename Two>
class HashNode
{
	One value;
	Two key;
public:
	HashNode()
	{
		this->value = NULL;
		this->key = NULL;
	}
	HashNode(One value, Two key)
	{
		this->value = value;
		this->key = key;
	}
	One GetValue()
	{
		return this->value;
	}
	Two GetKey()
	{
		return this->key;
	}
	~HashNode() {}

private:

};
