#include "main.h"

/**
 * _strcpy - function that copies the string pointed
 * to by src, including the terminating null byte (\0)
 * to the buffer pointed to by dest
 *
 * Return: value of the pointer to dest
 *
 * @src: sourcse of string to be copied
 *
 * @dest: destenation to copy string in
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (&dest);
}
