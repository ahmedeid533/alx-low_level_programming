#include "main.h"

/**
 * puts2 - function that prints every other character
 * of a string, starting with the first character
 * followed by a new line
 *
 * Return: void
 *
 * @str: starting pointer
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
		{
			break;
		}
		i += 2;
	}
	_putchar('\n');
}
