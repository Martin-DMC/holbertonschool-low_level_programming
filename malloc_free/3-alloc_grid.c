#include <stdlib.h>
/**
 * liberacion - forma recursiva para liberar funcion
 * @grid: puntero
 * @row: filas
 *
 * Return: puntero
 */
void liberacion(int **grid, int row)
{
	if (row < 0)
		return;

	free(grid[row]);
	liberacion(grid, row - 1);
}
/**
 * alloc_helper - forma recursiva para hacer grid
 * @grid: puntero
 * @width: ancho
 * @height: largo
 * @row: fila
 *
 * Return: puntero
 */
int **alloc_helper(int **grid, int width, int height, int row)
{
	int j;

	if (row == height)
		return (grid);

	grid[row] = (int *)malloc(width * sizeof(int));
	if (grid[row] == NULL)
	{
		liberacion(grid, row - 1);
		free(grid);
		return (NULL);
	}

	for (j = 0; j < width; j++)
		grid[row][j] = 0;

	return (alloc_helper(grid, width, height, row + 1));
}
/**
 * alloc_grid - devuelve puntero a array bidimensional
 * @width: ancho
 * @height: largo
 *
 * Return: puntero
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int **resultado;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	resultado = alloc_helper(grid, width, height, 0);
	if (resultado == NULL)
		free(grid);

	return (resultado);
}
