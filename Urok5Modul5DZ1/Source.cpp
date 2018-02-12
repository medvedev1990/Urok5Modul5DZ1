#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, exit;
	do
	{
		cout << "number exemple ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1 :
		{
			/*1.Дан целочисленный квадратный массив 10×10. Найти сумму элементов  каждой строки.*/
			int a[10][10];
			int i, j;
			int summ = 0;
			for ( i = 0; i < 10; i++)
			{
				summ = 0;
				for (j = 0;j < 10;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
					summ += a[i][j];
				}
				cout << "сумма " << i << " строки = " << summ;
				cout << endl;
			}
			cout << "---------------------\n";
		}
		break;
		case 2:
		{
			/*2.Дан целочисленный квадратный массив 4×4. Найти строку с наименьшей суммой элементов*/
			int a[4][4];
			int i, j=0;
			int c[4];
			int summ = 0;
			for (i = 0; i < 4; i++)
			{
				summ = 0;
				for (j = 0;j < 4;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
					summ += a[i][j];
				}
				c[i] = summ;
				cout << "сумма " << i << " строки = " << summ;
				cout << endl;
			}
			cout << "---------------------\n";
			int min = c[0];
			for (i = 0;i < 4;i++)
			{
				if (min > c[i])
				{
					min = c[i];
					j = i;
				}	
			}
			cout << "минимальное число " << min << " строка " << j << endl;
		}
		break;
		case 3:
		{
			/*3.Дана целочисленная матрица  6× 8. Найти произведение положительных элементов первого столбца.*/
			int a[6][8];
			int i, j = 0;
			unsigned long long summ = 1;
			for (i = 0; i < 6; i++)
			{
				for (j = 0;j < 8;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			for (i = 0;i < 6;i++)
			{
				summ *= a[i][0];
			}
			cout << "произведение первого столбца = " << summ << endl;
		}
		break;
		case 4:
		{
			/*4.Составить программу, которая заполняет квадратную матрицу порядка n натуральными числами 1, 2, 3, .. ., n2, записывая их в нее "по спирали" по часовой стрелке.*/
			int A[6][6];
			int i = 1, j, k, p = 3;
			for (k = 1;k <= p;k++)/*Цикл по номеру витка*/
			{
				for (j = k - 1;j<6 - k + 1;j++) A[k - 1][j] = i++;/*Определение значений верхнего гор столбца*/
				for (j = k;j<6 - k + 1;j++) A[j][6 - k] = i++;/* --//-- По правому вертикальному столбцу*/
				for (j = 6 - k - 1;j >= k - 1;--j) A[6 - k][j] = i++;/* --//-- по нижнему горизонтальному столбцу*/
				for (j = 6 - k - 1;j >= k;j--) A[j][k - 1] = i++;/* --//-- по левому вертикальному столбцу*/
			}
			if (6 % 2 == 1) A[p][p] = 6*6;
			for (i = 0;i<6;i++)
				for (j = 0;j<6;j++)
				{
					printf(" %4d ", A[i][j]);
					if (j == 6 - 1) printf("\n");
				}
		}
		break;
		case 5:
		{
			/*5.Дан двухмерный целочисленный массив A(M,N). Составить  одномерный массив B из номеров строк этого массива*/
			int a[6][8];
			int i, j = 0;
			int c[6];
			for (i = 0; i < 6; i++)
			{
				c[i] = i;
				cout << i << " - ";
				for (j = 0;j < 8;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
				}
				cout << endl<<endl;
			}
			cout << endl;
		}
		default:cout << "No exemple" << endl;
			break;
		}
		cout << "continue? 1-Yes 2-No: ";
		cin >> exit;
		cout << endl;
	} while (exit == 1);
}