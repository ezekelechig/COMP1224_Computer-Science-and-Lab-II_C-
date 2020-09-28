#include <iostream>
using namespace std;
int Fib(int N);
int main()
{
	int N;
	cout << "Input a positive integer number less than 20:";
	cin >> N;
	//main calls int Fib(int N) below
	cout << Fib(N)<<endl;

}
int Fib(int N)
{
	 if(N==1)
	{
		 return 1;
	}
		else if (N == 2)
	{ 
		return 1;
	}
		else
		{
			//int Fib(int N) calls itself recursively below
			return Fib(N - 1) + Fib(N - 2);
		}

}

