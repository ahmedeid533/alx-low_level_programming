#include "main.h"

/**
 * clear_bit - as it's name
 * @n: the number
 * @index: the index
 * Return: the bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
