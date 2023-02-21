#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0
 *
 * Return: void no Return
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int n;
	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			n = i * j;
			_putchar(',');
			_putchar(' ');
			if (n >= 10)
			{
				_putchar('0' + n / 10);
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}


