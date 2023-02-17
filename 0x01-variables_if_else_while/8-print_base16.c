#include <stdio.h>

/**
 * main - this app print
 * digitss from 0 to f base 16
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
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
