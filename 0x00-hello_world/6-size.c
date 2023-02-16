#include <stdio.h>

/**
 * main - first line of code
 *
 * Return: should return 0 always
 *
 * sizeof: return type is lu
 */
int main(void)
{
	char character;
	int integr;
	long int long_integr;
	long long int long_long_int;
	float floating_point;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integr));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long_integr));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long_long_int));
	printf("Size of a float: %lu byte(s)\n", sizeof(floating_point));
	return (0);
}
