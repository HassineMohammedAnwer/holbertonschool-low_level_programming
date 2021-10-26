#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of array
 * @height: height of array
 * Return: a pointer to the array, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **chars;
	int i = 0, j = 0;

	if (height <= 0 || width <= 0)
		return (NULL);
	chars = (int **) malloc(sizeof(int *) * height);
	if (chars == NULL)
		return(NULL);
	while (i < height)
	{
		chars[i] = (int *) malloc(sizeof(int) * width);
		if (chars[i] == NULL)
		{
			free(chars);
			while (j <= i)
			{
				free(chars[j]);
				j++;
			}
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			chars[i][j] = 0;
		}
	}
	return (chars);
}
