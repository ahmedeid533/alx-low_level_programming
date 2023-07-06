#include "main.h"

/**
 * print_binary - as it is
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	int num_Bits = 0;
	unsigned long int temp = n;

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
	for (int i = num_bBts - 1; i >= 0; i--)
	{
		unsigned long int mask = 1 << i;

		_putchar ((n & mask) ? '1' : '0');
	}
}
