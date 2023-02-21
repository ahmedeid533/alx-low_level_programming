#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * from n to 98, followed by a new line
 *
 * Return: void no return
 *
 * @n: starting number 
 */
void print_to_98(int n)
{
	int c = 1;
	if (n > 98)
		c = -1;
	printf("%d", n);
	while (n != 98)
	{
		n += c;
		printf(", %d", n);
	}
}
