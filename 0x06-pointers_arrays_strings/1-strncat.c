#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * it will use at most n bytes from src
 *
 * Return: a pointer to the resulting string dest
 * @dest: concating string in
 * @src: concated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
