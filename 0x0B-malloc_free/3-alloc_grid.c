#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to twon dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer of an array
 * NULL on failure
 * if height or width are 0 or - return NULL
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, m, k;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));
		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] = (int *) malloc(width * sizeof(int));
			if (!p[i])
			{
				for (j = 0; j <= i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
		}
		for (m =  0; m < height; m++)
		{
			for (k = 0; k < width; k++)
			{
				p[m][k] = 0;
			}
		}
		return (p);
	}
}
