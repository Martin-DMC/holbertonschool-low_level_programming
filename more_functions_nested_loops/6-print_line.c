
/**
 * print_line - imprime lineas
 * @n: numero
 *
 * Description: imprime lines de la cantidad indicada
 */

#include "main.h"

void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
