#include <iostream>
using namespace std;

struct Student{
	int id;
	double score;
	char grade;
};
//void performance(Student K[], int size);
void recursion(Student K[], int i);

int main()
{
	Student K[20];
	for (int i = 0; i < 20; i++)
	{
		K[i].id = i + 1;

	}
	for (int i = 0; i < 20; i++)
	{
		K[i].score = 10 + rand() % 90;

	}
	
	for (int i = 0; i < 20; i++)
	{
		cout << K[i].id << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < 20; i++)
	{
	cout << K[i].score << " ";
	}
	cout << endl << endl;
	recursion(K, 20);
	for (int i = 0; i < 20; i++)
	{
		cout << K[i].grade << " "<<" ";
	}
	cout << endl;

	/*for (int i = 0; i < 20; i++)
	{
		cout << K[i].grade << " ";
	}*/

	return 0;
}

/*void performance(Student K[], int size)
{
for (int i = 0; i < 20; i++)
{
if (K[i].score >= 90)
{
K[i].grade = 'A';
}
else if (K[i].score >= 80)
{
K[i].grade = 'B';
}
else if (K[i].score >= 70)
{
K[i].grade = 'C';
}
else if (K[i].score >= 60)
{
K[i].grade = 'D';
}
else
{
K[i].grade = 'F';
}
}

}
*/
void recursion(Student K[], int size)
{
	if (size > 0)
	{
		if (K[size - 1].score >= 90)
		{
			K[size - 1].grade = 'A';
		}
		else if (K[size - 1].score >= 80)
		{
			K[size - 1].grade = 'B';
		}
		else if (K[size - 1].score >= 70)
		{
			K[size - 1].grade = 'C';
		}
		else if (K[size - 1].score >= 60)
		{
			K[size - 1].grade = 'D';
		}
		else
		{
			K[size - 1].grade = 'F';
		}
		recursion(K, size - 1);

	}
	
}