#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - append text to file >>
 * @filename: file name
 * @text_content: the text
 * Return: success or not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, W_OK) == -1){
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	len = strlen(text_content);
	if (fwrite(text_content, sizeof(char), len, fp) != len)
	{
		fclose(fp);
		return -1;
	}
	fclose(fp);
	return 1;
}
