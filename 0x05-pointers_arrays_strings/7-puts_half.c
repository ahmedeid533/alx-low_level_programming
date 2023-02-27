#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 *
 * Return: void
 *
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i = ((i + 1) / 2);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
