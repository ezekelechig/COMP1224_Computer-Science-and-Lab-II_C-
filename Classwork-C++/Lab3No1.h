
#include"Lab3No1x.h"

void fun(int *p, int size, int &counter)					// function definition
{
	if (size > 0)
	{
		if (p[size] % 3 == 0 && p[size] % 2 == 0)           // Checks even multiples of 3
		{
			
			counter++;                                      //updates counter
			cout << p[size] <<","<< " ";                    //Outputs even multiples of 3
			
			                                            
		}
		
		fun(p, size - 1, counter);							//makes it recusive and calls function again

	}
	
}
