#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: 2 diminstion array
 */
int **alloc_grid(int width, int height)
{
	int **TwoArr;
	int i;

	*TwoArr = malloc(sizeof(*int) * height);
	for (i = 0; i < height; i++)
	{
		TwoArr[i] = malloc(sizeof(int) * width);
	}
	return (TwoArr);
}
