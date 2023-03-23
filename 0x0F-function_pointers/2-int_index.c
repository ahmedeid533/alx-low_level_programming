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

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		c = cmp(array[size]);
		if (c != 0)
			return (i);
	}
	return (-1);
}
