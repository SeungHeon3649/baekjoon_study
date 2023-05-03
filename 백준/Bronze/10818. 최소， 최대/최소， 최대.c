#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	scanf("%d", &size);
	int* arr = malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
	{
		scanf(" %d", &arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	for (int j = 1; j < size; j++)
	{
		if (max < arr[j]) max = arr[j];
		if (min > arr[j]) min = arr[j];
	}
	printf("%d %d", min, max);
	return 0;
}