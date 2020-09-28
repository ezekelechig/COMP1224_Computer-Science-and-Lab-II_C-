#include <iostream>
using namespace std;
int main()
{
	int N;
	int f1 = 1, f2 = 1, fn;
	cout << "Input a positive integer number less than 30:";
	cin >> N;
	//loop to control the output of the Nth Fibonacci number
	for (int i = 0; i < N - 2; i++)
	{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
			
	}
	cout << fn << " "; //outputs the Nth Fibonacci number


		}