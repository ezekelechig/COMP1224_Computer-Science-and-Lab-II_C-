#include <iostream>
using namespace std;
int FnCount(int K[], int size); //function decraration for the recursive counter
int count = 0;
int main()
{
	int count = 0;
	int *K; //K is declared as a pointer variable
	K = new int[100]; // K is allocated integer array with 100 element
	for (int e = 0; e < 100; e++)
	{
		K[e] = rand() % 1000;
	}

	FnCount(K, 100);
	cout << count << endl;
	for (int e = 0; e < 100; e++)
	{
		if (K[e] % 3 == 0 && K[e] % 2 == 0)
			cout << " " << K[e];
	}

	cout << endl;

}
int FnCount(int K[], int size)
{
	int count = 0;
for (int e = 0; e < 100; e++)
	{
		if (K[e] % 3 == 0 && K[e] % 2 == 0 )

		{
			count++;
			//return count + FnCount(K, size-1);
		}

		
		
		
	}
	/*}
	cout << count << endl;
	for (int e = 0; e < 100; e++)
	{
	if (K[e] % 3 == 0 && K[e] %2 == 0)
	cout << K[e] <<" ";
	}

	return 0;*/
return count;
	
}