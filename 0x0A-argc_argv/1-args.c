#include <stdio.h>
#include "main.h"
/**
 * main - print name
 * @argc: number
 * @argv: variables
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
