#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i;
	int j;
	int len;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		s1[0] = '';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		s2[0] = '';
	}
	j = 0;
	len = 0;
	while (s1[j] != '\0')
	{
		j++;
		len++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		len++;
	}
	ch = malloc(sizeof(char) * len);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ch[i] = s1[i];
	for (i = 0; j <= len; j++, i++)
		ch[j] = s2[i];
	return (ch);
}

