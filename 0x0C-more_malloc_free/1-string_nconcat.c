#include "main.h"
#include <stdlib.h>

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
	int lens1 = 0;
	int lens2 = 0;
	int j;
	int i;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		s2 = "";
	}
	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;
	if (n > lens2)
		n = lens2;
	str = malloc(lens1 + n + 1);
	for (i = 0; i < lens1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
