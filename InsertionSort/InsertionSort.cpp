#include <stdio.h>

void InsertionSort(int* A, int n);

int main()
{
	int A[6] = { 5,2,4,6,1,3 };
	int n = sizeof(A) / sizeof(int);
	InsertionSort(A, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d", A[i]);
	}
}

void InsertionSort(int* A, int n)
{
	int key = 0;
	int i = 0;
	for (int j = 1; j < n; j++)
	{
		key = A[j];
		i = j - 1;
		while ((i > -1) && (A[i] > key))
		{
			A[i + 1] = A[i];
			i = i - 1;
		}
		A[i + 1] = key;
	};
}