#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * haystack: string
 * needle: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int f = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		f = i;
		while (needle[j] != '\0')
		{
			if (haystack[f] == needle[j])
			{
				f++;
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
