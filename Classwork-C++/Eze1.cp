#include <iostream>
using namespace std;
//Program to display star pattern/diamond shape using nested loops
int main()
{
	int N;
	cout << "Please give the integer value of N the number rows of stars to print: ";
	cin >> N;
	//Nested for loop to display the first half of the diamond shape ie. N rows triangle
	for (int i = 0; i < N; i++)
	{
		/*controls the ouput of spaces before the stars for the first
		of the diamond*/
		for (int j = 0; j < N - i; j++)
		{
			cout << " ";
		}
		//controls the output of star for each row of the upper triangle
		for (int k = 0; k <= i; k++) 
		{
			cout << "*" << " ";


		}
		cout << endl;
	}
	//Nested for loop to display the second half of the diamond shape
		for (int l = 0; l < N - 1; l++)
		{
			//controls the ouput of spaces for the lower reverse triangle
			for (int n = 0; n <= l+1; n++)
			{
				cout << " ";
			}
			//controls the output of stars for each row of the lower reverse triangle
			for (int m = 0; m < N - 1 - l; m++)
			{
				cout << "*" << " ";
			}
			cout << endl;
		}

		


	




}

