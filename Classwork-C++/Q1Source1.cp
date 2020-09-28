#include"Q1Header.h"
Number::Number(int n)
{
	size = n;

	p = new int[n];
	for (int i = 0; i < size; i++)
	{
		p[i] = rand() % 1000;
		cout << p[i] << endl;
	}

}
Number::~Number()
{
	delete[] p;

}
bool Number::prime_check(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
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