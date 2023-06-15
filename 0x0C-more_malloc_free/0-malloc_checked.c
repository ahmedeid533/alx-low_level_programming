#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - abc
 * @b: var
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);

	if (point == NULL)
		exit(98);

	return (point);
}
