#include <stdio.h>

/**
 * main - this app print
 * characters from z to a
 * by ascii code term
 *
 * Return: 0 mean success
 *
 */
int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; character--)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
