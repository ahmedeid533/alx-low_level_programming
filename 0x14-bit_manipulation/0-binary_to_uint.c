#include "main.h"

/**
 * binary_to_uint - as it's name
 * @b: pointer to string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	int base = 1;
	unsigned int unit = 0;

	if (!b)
	{
		return (0);
	}
	len = get_len(b) - 1;
	for (; len >= 0; len--)
	{
		if (b[len] == '0' || b[len] == '1')
		{
			unit += base * (b[len] - '0');
		}
		else
		{
			return (0);
		}
		base *= 2;
	}
	return (unit);
}

/**
 * get_len - get string length
 * @str: string
 * Return: int
 */
int get_len(const char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
