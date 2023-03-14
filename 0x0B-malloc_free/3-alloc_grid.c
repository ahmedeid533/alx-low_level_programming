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
	int f;

	TwoArr = malloc(8 * height);
	if (width <= 0)
		return (NULL);
	if (TwoArr == NULL)
	{
		free(TwoArr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		TwoArr[i] = malloc(sizeof(int) * width);
		if (TwoArr[i] == NULL)
		{
			for (f = 0; f <=i; f++)
			{
				free(TwoArr[f]);
			}
			free(TwoArr);
			return (NULL);
		}
	}
	return (TwoArr);
}
