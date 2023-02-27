#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * Return: void
 *
 * @s: string should be reversd
 */
void rev_string(char *s)
{
	char stemp[500];
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	while (length >= 0)
	{
		stemp[i] = s[length];
		i++;
		length--;
	}
	i--;
	while (i >= 0)
	{
		s[i] = stemp[i];
		i--;
	}
}
