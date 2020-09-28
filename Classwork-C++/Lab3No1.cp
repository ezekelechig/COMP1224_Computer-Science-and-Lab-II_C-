
/* Andra' Gilliam (Driver)
ID:20540648
Lab 3 #1
Eze Kelechi (Navigator)
ID:21179881
*/

#include <iostream>
#include "Lab3No1.h"
#include "Lab3No1x.h"

int main()
{
	int *p;													//define pointer p
	p = new int[100];										//allocates p with 100 elements
	for (int i = 0; i<100; i++)								//for loop assigns random numbers to p
	{
		p[i] = rand() % 1000;								// between 0-999
	}
	int counter = 0;
	cout << "Integers that are even multiples of 3: "<<endl<<endl;
	fun(p, 100, counter);									      //function call
	cout << endl<<endl;
	cout << "Number of integers that are even multiples of 3 = ";
	cout << counter << endl << endl;								//prints number of counts
	delete[]p;												// deletes the memory

	system("PAUSE");
	return 0;
}

