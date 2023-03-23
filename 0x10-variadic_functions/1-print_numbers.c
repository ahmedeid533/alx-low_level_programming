#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print with sepa
 * @separator: fasla
 * @n: is the number of integers passed to the function
 * Return: null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list arg;

	if (separator == NULL)
		separator = "";

	va_start(arg, n);
	for (i = 0; i < n - 1; i++)
	{
		num = va_arg(arg, unsigned int);
		printf("%d%s",num , separator);
	}
	
	num = va_arg(arg, unsigned int);
	printf("%d\n",num);
	va_end(arg);
}
