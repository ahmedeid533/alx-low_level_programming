#include "main.h"

/**
 * _islower - function that determen if
 * the char is lower or upper case
 *
 * Return: 1 if lower 0 otherwise
 *
 * @c: the check paramaeter
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
