/**
 * print_square - imprime diagonales
 * @size: medida
 *
 * Description: imprime un cuadrado
 */

#include "main.h"

void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		h = 1;
		while (h <= size)
		{
			w = 1;
			while (w <= size)
			{
				_putchar('#');
				w++;

			}
			_putchar('\n');
			h++;
		}
		_putchar('\n');
	}
}
