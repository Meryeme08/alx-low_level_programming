#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **bee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	bee = malloc(sizeof(int *) * height);

	if (bee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		bee[x] = malloc(sizeof(int) * width);

		if (bee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(bee[x]);

			free(bee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			bee[x][y] = 0;
	}

	return (bee);
}

