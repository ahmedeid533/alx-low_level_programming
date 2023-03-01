#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * it will use at most n bytes from src
 *
 * Return: a pointer to the resulting string dest
 *
 * @dest: concating string in
 *
 * @src: concated string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
