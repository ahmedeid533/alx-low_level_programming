#include "dog.h"

/**
 * _strlen - function that returns
 * the length of a string
 *
 * Return: the length of a string
 *
 * @s: string entry pointer
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
