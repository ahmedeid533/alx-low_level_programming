#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Print a character
 * @arg: args
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Print an integer
 * @arg: args
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Print a float
 * @arg: args
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Print a string
 * @arg: args
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Print a variable argument list
 * @format: A string containing the format of the argument list
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	char *print_type = "cifs";

	/* Array of function pointers */
	void (*print_fn[])(va_list) = {print_char, print_int, print_float, print_string};

	/* Initialize variable argument list */
	va_start(args, format);

	/* Loop through the format string */
	while (format && format[i])
	{
		j = 0;
		/* Loop through the format string and match the format specifier */
		while (j < 4)
		{
			if (format[i] == print_type[j])
			{
				printf("%s", sep);
				print_fn[j](args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	/* Clean up variable argument list */
	va_end(args);
}
