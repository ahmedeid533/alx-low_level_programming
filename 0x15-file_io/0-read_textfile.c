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
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	text = malloc(letters);
	if (text == NULL)
	{
		close(file);
		return (0);
	}
	redn = read(file, text, letters);
	if (redn == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	wrtn = write(STDOUT_FILENO, text, redn);
	if (wrtn == -1 || wrtn != redn)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (wrtn);
}
