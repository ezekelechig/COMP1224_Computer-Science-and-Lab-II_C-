#include <iostream>
using namespace std;
class Math_1  //Class definition
{

public: int Add(int g, int n);   // first Member function declaration for Math_1
		int substract(int g, int n);// second member function declaration for Math_1
};
int Math_1::Add(int g, int n)// Member function definition for addition
{
	return g + n;
}
int Math_1::substract(int g, int n) //Member function definition for for substraction
{
	return g - n;
}