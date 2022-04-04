#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width : int
 * @height : int
 * Retern: pointer
 */

int **alloc_grid(int width, int height)
{
	int **g, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int)* height);

	if (g == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);
		if (g == 0)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}
return (g);
}
