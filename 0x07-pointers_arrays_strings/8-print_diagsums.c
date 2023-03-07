#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum
 *
 * @a: matrix
 * @size: dialog
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int isum;
	int jsum;

	for (i = 0; i < size; i++)
	{
		isum += a[i][i];
	}
	j = size - 1;
	for (i = 0; i < size; i++, j--)
	{
		jsum += a[i][j];
	}
	printf("%d, %d\n", isum, jsum);
}
