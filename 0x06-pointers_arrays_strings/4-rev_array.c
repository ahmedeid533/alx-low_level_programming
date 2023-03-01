#include "main.h"

/**
 * reverse_array - function that reverses
 * the content of an array of integers
 * @n: is the number of elements of the array
 * @a: array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int array[1000];
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		array[i] = a[i];
	}
	for (j = 0; j < n; j++)
	{
		i--;
		a[i] = array[j];
	}
}
