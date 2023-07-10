#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
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
	FILE *fp;

	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	size_t len;
	len = strlen(text_content);
	if (fwrite(text_content, sizeof(char), len, fp) != len)
	{
		fclose(fp);
		return -1;
	}
	fclose(fp);
	return 1;
}
