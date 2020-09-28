#include <iostream>
using namespace std;

class Number{
private: int *p;
		 int size;
public: 
		Number(int n);
		~Number();
		bool prime_check(int n);
		int prime_count();
};
Number::Number(int n)
{
	size = n;

	p = new int[n];
	for (int i = 0; i < size; i++)
	{
		p[i] = rand() % 1000;
		cout << p[i]<< endl;
	}

}
Number::~Number()
{
	delete [] p;

}
bool Number::prime_check(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
		
			return false;
		
	}

	return true;
}
int Number::prime_count()
{
	
	int counter = 0;
	for (int i = 0; i< size; i++)
	{
		if (prime_check(p[i]))
		{
			counter++;
		}
		
	}

	return counter;
}
int main()
{
	int n;
	cout << "Please enter an integer for n:" << endl;
	cin >> n;
	Number sam(n);
	cout <<"There are: "<< sam.prime_count() <<" "<<"Prime numbers in the Array"<< endl;
	
	return 0;
}