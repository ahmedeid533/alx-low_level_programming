#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: the value of the last digit
 *
 * @n: number
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
