#include "main.h"
/**
 * _sqrt - the actual function
 * @n: the number
 * @i: the gusse
 * Return: sqrt of number
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i > n / i)
		return (-1);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - git sqrt by recursion
 * Return: the Recursive number (sqrt)
 * @n: the number to get sqrt to
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (_sqrt(n, i));
}