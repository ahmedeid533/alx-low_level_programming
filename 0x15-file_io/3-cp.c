#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error - print error
 * @msg: print the msg
 * @arg: if there
 * @code: error
 */
void print_error(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * print_errori - print error
 * @msg: print the msg
 * @arg: if there
 * @code: error
 */
void print_errori(int code, const char *msg, int arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * main - the project
 * @argc: count of args
 * @argv: array of args
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	FILE *fp_from;
	FILE *fp_to;
	size_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to\n", "");
	}
	fp_from = fopen(argv[1], "rb");
	if (fp_from == NULL)
	{
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	fp_to = fopen(argv[2], "wb");
	if (fp_to == NULL)
	{
		print_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((bytes_read = fread(buffer, sizeof(char), BUFFER_SIZE, fp_from)) > 0)
	{
		bytes_written = fwrite(buffer, sizeof(char), bytes_read, fp_to);
		if (bytes_written != bytes_read)
		{
			print_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (ferror(fp_from))
	{
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (fclose(fp_from) != 0)
	{
		print_errori(100, "Error: Can't close fd %d\n", fileno(fp_from));
	}
	if (fclose(fp_to) != 0)
	{
		print_errori(100, "Error: Can't close fd %d\n", fileno(fp_to));
	}
	return (0);
}
