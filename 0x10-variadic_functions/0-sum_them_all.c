#include "variadic_functions.h"
#include <stdarg.h>

/**
 * int sum_them_all - summing
 * @n: number of args
 * Return: summ
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list arg;

	if (n <= 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, unsigned int);

	return (sum);
}
