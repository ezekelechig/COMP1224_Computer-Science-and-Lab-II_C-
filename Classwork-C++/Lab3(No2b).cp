#include <iostream>
using namespace std;
void Swap(int &A, int &B, int &C);
int main()
{
	int A, B, C;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;
	Swap(A,B, C);
	cout <<"A:"<< A <<" "<<"B:" <<B <<" "<<"C:"<< C<<endl;
	return 0;
}
void Swap(int &A, int &B, int &C)
{
	int temp;
	temp = A;
	A = B;
	B = C;
	C = temp;
}