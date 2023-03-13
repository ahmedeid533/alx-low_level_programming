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
	char *str1;
	char *str2;
	int i;
	int j;
	int len;

	if (s1 == NULL)
		str1[0] = '';
	else
		str1 = s1;
	if (s2 == NULL)
		str2[0] = '';
	else
		str2 = s2;
	j = 0;
	while (str1[j] != '\0')
	{
		j++;
		len++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		i++;
		len++;
	}
	ch = malloc(len);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ch[i] = str1[i];
	for (i = 0; j <= len; j++, i++)
		ch[j] = str2[i];
	return (ch);
}

