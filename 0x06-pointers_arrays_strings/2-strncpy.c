#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: destnation
 *
 * @src: source
 *
 * @n: number of chars
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int last = 0;

	while (dest[last] != '\0')
	{
		last++;
	}
	while (i < n && i <= last)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
		{
			break;
		}
	}
	while (i < n && i <= last)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
