#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, j, N = 3, M = 3, a[3][3], b[3][3]; int c[3][3];
	char quit;
	do
	{
		cout << "\nInput matrix A: 9 numbers \n";

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				cin >> a[i][j];
		}

		cout << "Input matrix B: 9 numbers " << endl;

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				cin >> b[i][j];
		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				c[i][j] = a[i][j] + b[i][j];
		}

		system("cls");
		cout << "Summation Matrix \n";

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				cout << c[i][j] << "\t";
				cout << endl;
		}

		cout << "\n To continue press y - ";
	} 
	
	while (cin >> quit && quit == 'y');
	system("pause");
	return 0;
}