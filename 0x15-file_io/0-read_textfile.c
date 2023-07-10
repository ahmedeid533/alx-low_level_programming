#include "main.h"

/**
 * read_textfile - out text file
 * @filename: the file name
 * @letters: number of letters
 * Return: num of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t redn;
	ssize_t wrtn;
	char *text;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == -1)
	{
		return (0);
	}
	text = malloc(letters);
	if (text == NULL)
	{
		fclose(file);
		return (0);
	}
	redn = read(file, text, letters);
	if (redn == -1)
	{
		free(text);
		fclose(file);
		return (0);
	}
	wrtn = write(1, text, redn);
	if (wrtn == -1)
	{
		free(text);
		fclose(file);
		return (0);
	}
	free(text);
	fclose(file);
	return (wrtn);
}
