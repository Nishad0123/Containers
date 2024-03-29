// C++ program to demonstrate bidirectional iterator
#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>v1 = {1, 2, 3, 4, 5};

	// Declaring an iterator
	list<int>::iterator i1;

	// Accessing the elements from end using decrement
	// operator
	for (i1=v1.end();i1!=v1.begin();--i1)
	{
		if (i1 != v1.end())
		{
			cout << (*i1) << " ";
		}
	}
	cout << (*i1);
	
	return 0;
}
