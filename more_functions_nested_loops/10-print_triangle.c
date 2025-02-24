/**
 * print_triangle - imprime triangulos
 * @size: numero
 *
 * Description: imprime triangulos en pantalla
 */

#include "main.h"

void print_triangle(int size)
{
	int i = 1;
	int esp, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			esp = size;
			r = 0;
			while (esp > i)
			{
				_putchar(' ');
				esp--;
			}
			while (r < i)
			{
				_putchar('#');
				r++;
			}
			_putchar('\n');
			i++;
		}
	}
}
