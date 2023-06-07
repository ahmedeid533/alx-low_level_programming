#include "main.h"
int sqrt(n, i)
{
	if (i*i == n)
		return (i);
	if (i >= n/i)
		return (-1);
	else sqrt(n, i++);
}
/**
 * _sqrt_recursion - git sqrt by recursion
 * Return: the Recursive number (sqrt)
 * @n: the number to get sqrt to
 */
int _sqrt_recursion(int n)
{
	int i = 2;
	return (sqrt(n,i));
}

