#include <stdlib.h>
#include "main.h"
/**
 * free_grid - libera la memoria dinamica
 * @grid: puntero
 * @height: largo
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
