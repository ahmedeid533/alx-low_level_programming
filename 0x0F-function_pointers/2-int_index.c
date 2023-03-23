#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: arr
 * @size: size
 * @cmp: fun
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
			return (i);
	}
	return (-1);
}
