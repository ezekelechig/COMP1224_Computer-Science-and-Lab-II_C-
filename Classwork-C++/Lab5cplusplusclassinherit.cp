#include <iostream>
using namespace std;
class Math_1{
private: int a;
		 int b;
public: int Add(int g, int n);
		int substract(int g, int n);
};
int Math_1:: Add(int g, int n)
{
	a = g; b = n; cout<< a + b <<endl;
}
int Math_1::substract(int g, int n)
{
	cout << a - b << endl;
}
class Math_2 :public Math_1{
private: int c;
		 int d;
public: double multiply(int g, int n);
		double divide(int g, int n);
};
double Math_2::multiply(int g, int n)
{
	c = g; d = n; cout<< c*d << endl;
}
double Math_2::divide(int g, int n)
{
	cout << c / d << endl;
	
}
int main()
{
	Math_2 A;
	int C;
	int D;
}