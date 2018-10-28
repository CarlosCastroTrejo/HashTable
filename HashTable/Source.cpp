#include"HashMap.h"
#include<string>
#include<iostream>

using namespace std;


int main() 
{
	HashMap<int,string> hash;

	hash.Insert(12, "carlos");
	hash.Insert(10, "manu");
	hash.Insert(500, "manu");
	hash.Insert(500, "borges");
	hash.Insert(10, "pepe");
	hash.display();
	
	system("pause");
}