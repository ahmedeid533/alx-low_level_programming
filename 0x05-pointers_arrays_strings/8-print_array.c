#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements
 * of an array of integers, followed by a new line
 *
 * Return: void
 *
 * @a: array to be printed
 * @n: is the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n >= 1)
	{
		printf("%d", a[0]);
	}
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
