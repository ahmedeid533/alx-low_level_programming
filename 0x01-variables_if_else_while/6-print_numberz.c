#include <stdio.h>

/**
 * main - this app print
 * numbers from 0 to 9
 * by ascii code term
 *
 * Return: 0 mean success
 *
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(48 + digit);
	}
	putchar('\n');
	return (0);
}
