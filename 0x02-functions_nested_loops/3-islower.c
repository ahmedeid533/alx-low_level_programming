#include "main.h"

/**
 * _islower - function that determen if 
 * the char is lower or upper case 
 * 
 * Return: 1 if lower 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	       return (1);
	}
	return (0);
}	
