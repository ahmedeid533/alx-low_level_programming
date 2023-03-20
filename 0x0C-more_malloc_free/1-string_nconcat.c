#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - string
 * @s1: str
 * @s2: str
 * @n: int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	unsigned int j;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;
	if (n > lens2)
		n = lens2;
	str = malloc(lens1 + n + 1);
	if (str == NULL)
		return (0);
	for (i = 0; i < lens1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}