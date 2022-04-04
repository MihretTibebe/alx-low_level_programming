#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width : int
 * @height : int
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **g, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(*g) * height);

	if (g == 0)
	{	free(g);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(**g) * width);
		if (g == 0)
		{	free(g[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}
return (g);
}
