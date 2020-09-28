#include <iostream>
using namespace std;
void swap(int *A, int *B, int *C);
int main()
{
	int A, B, C; // three integer variable delared.
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;

 swap(&A, &B, &C);
	cout <<"A: " << A <<" "<< "B: "<< B <<" "<< "C: " << C << endl;
	return 0;
}

void swap(int *A, int *B, int *C)
{
	int temp;
	temp = *A;
	*A = *B;
	*B = *C;
	*C = temp;
	
}
