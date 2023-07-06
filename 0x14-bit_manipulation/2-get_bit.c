#include "main.h"

/**
 * get_bit - as it's name
 * @n: the number 
 * @index: the index
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int numBits = 0;
	unsigned long int tmp = n;

	while (tmp > 0)
	{
		numBits++;
		tmp >>= 1;
	}
	if (index >= numBits)
	{
		return (-1);
	}
	return ((n & (1UL << index)) ? 1 : 0);
}
