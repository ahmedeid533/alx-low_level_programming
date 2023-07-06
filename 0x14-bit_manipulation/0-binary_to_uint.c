#include "main.h"

/**
 * binary_to_uint - as it's name
 * @b: pointer to string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = get_len(b) - 1;
	int base = 2;
	unsigned int unit;

	if (b[len] == '0' || b[len] == '1')
	{
		unit = b[len--] - '0';
	}
	else
	{
		return 0;
	}
	for (len; len >= 0; len--)
	{
		if (b[len] == '0' || b[len] == '1')
		{
			unit += base * (b[len] - '0');
		}
		else
		{
			return 0;
		}
		base *= base;
	}
	return (unit);
}


/**
 * get_len - get string length
 * @str: string 
 * Return: int
 */
int get_len(const *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return count;
}
