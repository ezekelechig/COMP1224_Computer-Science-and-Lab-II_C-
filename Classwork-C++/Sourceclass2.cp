#include <iostream>
using namespace std;
int G = 10;
class Parent{
private: int a;
public: int fun();
		Parent();
		Parent(int n);
		~Parent();
};
Parent::Parent()
{
	a = G; G++; cout << "Hi" << endl;
}
Parent::Parent(int n)
{
	a = n; G++; cout << "Hello" << endl;
}
Parent::~Parent()
{
	cout << a << endl;
}
int Parent::fun()
{
	return G + a;
}
class Child :public Parent{
private: int b;
public: Child();
		~Child();
		void fun();
		int fun(int n);
};
Child::Child()
{
	G = G / 2; b = G; cout << "Good" << endl;
}
Child::~Child()
{
	cout << b << endl;
}
void Child::fun()
{
	G = G * 2; cout << "fun" << endl;
}
int Child::fun(int n)
{
	return b*G;
}
int main()
{
	Parent A(5), B;
	Child C;
	cout << C.fun(G) << endl;
	cout << B.fun() << endl;
	return 0;
}
