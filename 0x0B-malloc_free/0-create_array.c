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
	unsigned int i;

	ch = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
