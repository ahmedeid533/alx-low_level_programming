#include "main.h"

/**
 * RealCheck - realy check function
 * @x: the number
 * @div: the dividor
 * Return: int
 */
int RealCheck(int x, int div);
/**
 * is_prime_number - check prime
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 * @n: the checking number
 */
int is_prime_number(int n)
{
	if (n <= 2)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (RealCheck(n, 2));
}
/**
 * RealCheck - realy check function
 * @x: the number
 * @div: the dividor
 * Return: int
 */
int RealCheck(int x, int div)
{
	if (!(x % div))
	{
		return (0);
	}
	if (div >= x / 2)
	{
		return (1);
	}
	return (RealCheck(x, div + 1));
}
