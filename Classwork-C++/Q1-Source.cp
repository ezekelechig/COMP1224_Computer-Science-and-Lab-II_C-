#include "Q1Header.h"
int main()
{
	int n;
	cout << "Please enter an integer for n to output the # of prime numbers in n-size array :" << endl;
	cin >> n;
	cout << endl;
	Number sam(n);
	cout << endl << endl;
	cout << "There are: " << sam.prime_count() << " " << "Prime numbers in the Array" << endl<<endl;

	return 0;
}