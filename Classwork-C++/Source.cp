#include <iostream>
using namespace std;

int main()
{
	int *K;
	K = new int [50];
	for (int i = 0; i < 50; i++){
		K[i] = rand() % 1000;
	}
	cout << prime_count(K, 50);
	return 0 ;

}

int prime_count(int K[], int size){
	int count = 0;
	for (int i = 0; i < 50; i++)
	{
		if (prime(K[i]))
			count++;
	}
	return count;
}

bool prime(int n)
{
	for (int i = 2; i < 999; i++ )
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}