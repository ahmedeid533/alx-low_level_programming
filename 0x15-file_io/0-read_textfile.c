#include "main.h"

/**
 * read_textfile - out text file
 * @filename: the file name
 * @letters: number of letters
 * Return: num of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;

	if (filename == NULL)
	{
		return(0);
	}
	file = open(filename, "r");
	if (file == NULL)
	{
		return(0);
	}
	return(write(1, file, letters));
}
