#include "main.h"

/**
 * _strspn - that gets the length of a prefix
 *
 * @s: string
 * @accept: prefix
 * Return: nuber
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				i++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
