#include "Header.h" //Header file

class Math_2 :public Math_1{

public: int multiply(int g, int n);  //first Member function declaration for Math_2
		double divide(int g, int n); //second Member function declaration for Math_2
};
int  Math_2::multiply(int g, int n) //member function definition for multiplication
{
	return g*n;
}
double Math_2::divide(int g, int n) //member function definition for division
{
	return g / n;

}