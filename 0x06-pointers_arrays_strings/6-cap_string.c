#include "main.h"

/**
 * cap_string - function that capitalizes
 * all words of a string
 * Return: pointer to string
 * @c: string
 */
char *cap_string(char *c)
{
	int i = 0;

	if (c[i] >= 'a' && c[i] <= 'z')
	{
		c[i] -= 32;
	}
	while (c[i] != '\0')
	{
		if (!(c[i] >= 'a' && c[i] <= 'z') && !(c[i] >= 'A' && c[i] <= 'Z'))
		{
			i++;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] -= 32;
				i++;
			}
			continue;
		}
		i++;
	}
	return (c);
}
