#include <iostream>
using namespace std;
class Parent{
private: int a, *P;
		 void foo(){ cout << "Hello" << endl; }
public:  int b;
		 int fun();
		 Parent();
		 Parent(int A);
		 ~Parent();
};
 Parent::Parent()
{
	a = 1; b = 2; P = new int[5];
}

Parent::Parent(int A)
{
	a = A; b = 3; foo(); P = new int[A];
}
Parent::~Parent()
{
	cout << a + b << endl; delete [] P;
}
int Parent::fun()
{
	return a + b;
}

class Child :public Parent{
private:int c;
public: int d;
		Child();
		void test();
};
Child::Child()
{
	c = 5; d = 6; cout << "Morning" << endl;
}
void Child::test()
{
	cout << d << endl;
}
int main()
{
	Parent Abraham; Parent Sarah(5);
	return 0;
}