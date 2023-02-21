#include "main.h"

/**
 * print_alphabet_x10 - print 10 lines
 * of alphabet each line followed by new line
 *
 * no return
 */
void print_alphabet_x10(void)
{
	char character;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
