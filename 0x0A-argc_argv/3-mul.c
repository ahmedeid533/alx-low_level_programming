#include <stdio.h>
#include "main.h"

/**
 * _convert - from string to number
 * @s: string
 * Return: number
 */
int _convert(char *s)
{
	int number = 0;
	int i = 0;
	int dec = 1;
	int mins = 0;

	if (s[0] == '-')
	{
		dec = -1;
		mins = 1;
		i++;
	}

	while (s[i] != '\0')
	{
		if ((s[i] > '9') || (s[i] < '0'))
		{
			return (-1);
		}
		i++;
	}
	i--;
	while (i >= mins)
	{
		number += (s[i] - 48) * dec;
		dec *= 10;
		i--;
	}
	return (number);
}

/**
 * main - print name
 * @argc: number
 * @argv: variables
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mult;
	int num1;
	int num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}
	num1 = _convert(argv[1]);
	num2 = _convert(argv[2]);
	mult = num1 * num2;
	printf("%d\n", mult);

	return (0);
}
