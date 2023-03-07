#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 *
 * @dest: destnation
 * @src: source
 * @n: number
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
