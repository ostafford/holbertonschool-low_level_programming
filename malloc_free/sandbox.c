#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* Function Prototype */
int **alloc_grid(int width, int height);

/* Data Segment */

/* BSS Segment */

/* Stack */
int **alloc_grid(int width, int height)
{
	int **mem_array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	mem_array = (int **) malloc(sizeof(int *) * height);

	if (mem_array == NULL)
		return (NULL);

	for (i = 0; i < height; i = i + 1)
	{
		mem_array[i] = (int *) malloc(sizeof(int) * width);
		if (mem_array[i] == NULL)
		{
			free(mem_array);
			for (j = 0; j <= i; j = j + 1)
				free(mem_array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i = i + 1)
	{
		for (j = 0; j < width; j = j + 1)
		{
			mem_array[i][j] = 0;
		}
	}
	return (mem_array);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
