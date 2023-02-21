#include "main.h"

/**
 * print_alphabet - this function should print
 * alphabet followed by new line
 *
 */

void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
