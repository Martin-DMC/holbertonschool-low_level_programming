/**
 * print_chessboard - imprime tablero de ajedrez
 * @a: puntero
 */
#include "main.h"

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (a[i] < a[8])
	{
		for (j = 0; j <= 8; j++)
		{
			if (j == 8)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(a[i][j]);
			}
		}
		i++;
	}
}
