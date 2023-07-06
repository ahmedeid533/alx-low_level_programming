#include "main.h"

/**
 * set_bit - as it's name
 * @n: the number
 * @index: the index
 * Return: the bit
 */
int set_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	return ((n | (1UL << index)));
}
