#include <stdio.h>

/**
 * main - this app print
 * characters from a to z
 * and from A to Z
 * by ascii code term
 *
 * Return: 0 mean success
 *
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	for (character = 'A'; character <= 'Z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
