#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * Return: a pointer to the resulting string dest
 * @dest: the blace string will concat in
 * @src: the concated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];
	return (dest);
}
