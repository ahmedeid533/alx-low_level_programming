#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - abc
 * @b: var
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *point = malloc(b);

	if (point == NULL)
		return (98);
	return (point);
}
