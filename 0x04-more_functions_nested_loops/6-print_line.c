#include "main.h"

/**
 * print_line - function that draws
 * straight line in the terminal
 *
 * Return: void no return
 *
 * @n: is the number of times the
 * character _ should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
