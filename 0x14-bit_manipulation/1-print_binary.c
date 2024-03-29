#include "main.h"

/**
 * print_binary - as it is
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	int num_Bits = 0;
	unsigned long int temp = n;
	int i;

	while (temp > 0)
	{
		num_Bits++;
		temp >>= 1;
	}
	if (num_Bits == 0)
	{
		_putchar('0');
		return;
	}

	for (i = num_Bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		_putchar((n & mask) ? '1' : '0');
	}
}
