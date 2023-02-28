#include <stdio.h> //библиотека ввода-вывода
#include <stdlib.h> //использование динамической памяти
#include <locale.h> //подключение файла русского языка
#include <math.h> //вычисление корня
#include <iostream> //использование потоков

using namespace std;
int** input(int n, int m)//ввод матрицы
{
	int i, j;
	int** a;
	a = (int**)malloc(m * sizeof(int*));
	for (i = 0; i < m; i++)
	{
		a[i] = (int*)malloc(n * sizeof(int*));
		for (j = 0; j < n; j++)
		{
			a[i][j] = 0;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Введите элемент матрицы A[%d] [%d]: ", i + 1, j + 1);
			scanf_s("%d", &a[i][j]);
		}
	}
	return a;
}

int** input2(int n, int m, int r)//создание псевдослучайных элементов матрицы
{
	int i, j;
	int** a;
	a = (int**)malloc(m * sizeof(int*));
	for (i = 0; i < m; i++)
	{
		a[i] = (int*)malloc(n * sizeof(int*));
		for (j = 0; j < n; j++)
		{
			a[i][j] = 0;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = rand() % r;
		}
	}
	return a;
}
