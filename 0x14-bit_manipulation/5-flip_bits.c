#include "main.h"

/**
 * flip_bits - get num of flips
 * @n: first num
 * @m: second num
 * Return: the num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned long int tmp = n;

	tmp ^= m;
	while (tmp > 0)
	{
		num_bits += (tmp & 1);
		tmp >>= 1;
	}
	return (num_bits);
}
