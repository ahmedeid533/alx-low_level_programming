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

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
