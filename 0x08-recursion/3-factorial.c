#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * Return: the factorial of a given number
 * @n: number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
