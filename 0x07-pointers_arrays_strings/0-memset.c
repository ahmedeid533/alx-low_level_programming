#include "main.h"

/**
 * _memset - function fills the first n bytes of
 * the memory area pointed to by s with
 * the constant byte b
 *
 * Return: a pointer to the memory area s
 *
 * @s: string
 * @b: constant byte
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
