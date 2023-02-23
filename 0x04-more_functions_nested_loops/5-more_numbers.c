#include "main.h"

/**
 * print_numbers -  prints the numbers
 * from 0 to 9, followed by a new line
 *
 * Return: void no return
 */
void print_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('0' + j/10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
