#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: if width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			while (i > 0)
			{
				free(gridout[i - 1]);
				i--;
			}
			free(gridout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridout[i][j] = 0;
		}
	}

	return (gridout);
}
