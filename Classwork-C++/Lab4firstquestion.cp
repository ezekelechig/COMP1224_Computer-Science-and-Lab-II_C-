#include <iostream>
using namespace std;

struct Student{
	int id;
	double score;
	char grade;
};
void performance(Student K[], int size);

int main()
{
	Student K[20];
	for (int i = 0; i < 20; i++)
	{
		K[i].id = i+1;
		
	}
	for (int i = 0; i < 20; i++)
	{
		K[i].score = 10 + rand() % 90;
		
	}
	performance (K, 20);
	for (int i = 0; i < 20; i++)
	{
		cout << K[i].id <<" ";
	}
	cout << endl<<endl;
	for (int i = 0; i < 20; i++)
	{
		cout << K[i].score <<" ";
	}
	cout << endl<<endl;
	for (int i = 0; i < 20; i++)
	{
		cout << K[i].grade << " ";
	}
	cout << endl;
		
	return 0;
}

void performance(Student K[], int size)
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

