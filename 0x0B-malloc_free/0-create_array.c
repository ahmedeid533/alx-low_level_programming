#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: fedine size of array
 * @c: init char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	char *msg;
	unsigned int i;

	msg = "failed to allocate memory";
	if (size <= 0)
	{
		for (i = 0; msg[i] != '\0'; i++)
		{
			_putchar(msg[i]);
		}
		_putchar('\n');
		return (NULL);
	}
	ch = malloc(sizeof(char) * size);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
