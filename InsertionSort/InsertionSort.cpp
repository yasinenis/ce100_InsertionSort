#include <stdio.h>
using namespace std;

void InsertionSort(int* Array, int n);

int main()
{
	int Array[6] = {5 , 4 ,1 ,6 ,2 ,3};
	int n = sizeof(Array) / sizeof(int);
	InsertionSort(Array, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d", Array[i]);
	}
}

void InsertionSort(int* Array, int n)
{
	int key = 0;
	int i = 0;
	for (int j = 1; j < n; j++)
	{
		key = Array[j];
		i = j - 1;
		while ((i > -1) && (Array[i] > key))
		{
			Array[i + 1] = Array[i];
			i = i - 1;
		}
		Array[i + 1] = key;
	};
}