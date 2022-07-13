#include<iostream>

using namespace std;

int main()
{
	int** a;
	a = new int*[5];
	for (int i = 0; i < 5; i++)
	{
		a[i] = new int[7];
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			a[i][j] = 1802;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << " " << a[i][j];
		}
		cout << endl;
	}
}