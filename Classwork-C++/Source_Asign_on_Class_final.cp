#include"Header1.h" // Header file

int main() //Main function
{
	Math_2 A; //Math_2 type variable declaration
	int Selection, C, D; // two variable declaration of type int
	cout << " Please enter 1 for ADDITTION, 2 for MULTIPLICATION, 3 for SUBSTRACTION and 4 for DIVISION" << endl;
	cout << "Selection: ";
	cin >> Selection;
	cout << "Please enter two integers for C and D to perform arithmetic operation  Selected" << endl;
	cout << "C :";
	cin >> C;
	cout << "D :";
	cin >> D;
	if (Selection == 1)
	{
		cout << "C + D = ";
		cout << A.Add(C, D) << endl; // performs sumation on two the integer inputs
	}
	else if (Selection == 2)
	{
		cout << "C x B = ";
		cout << A.multiply(C, D) << endl;// performs division on two the integer inputs
	}

	else if (Selection == 3)
	{
		cout << "C - B = ";
		cout << A.substract(C, D) << endl; // performs substraction on two the integers inputs
	}

	else if (Selection == 4)
	{
		cout << "C / D = ";
		cout << A.divide(C, D) << endl; //performs division on two integer inputs
	}
	else
		cout << "Error" << endl;

}