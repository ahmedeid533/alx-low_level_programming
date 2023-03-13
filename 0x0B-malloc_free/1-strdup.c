#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *ch;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	ch = malloc(sizeof(char) * (len + 1));
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		ch[i] = str[i];
	}
	return (ch);
}
