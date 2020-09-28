#include <iostream>
#include <cmath>
using namespace std;

class Number{
private: int *p;
		 int size;
public:
	Number(int n);
	~Number();
	bool prime_check(int n);
	int prime_count();
};