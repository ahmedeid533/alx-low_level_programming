#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - acf
 * @min: min
 * @max: max
 * Return: point
 */
int *array_range(int min, int max)
{
	int size;
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
}
