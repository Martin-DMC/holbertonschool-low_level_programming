/**
 * print_diagonal - imprime diagonales
 * @n: numero
 *
 * Description: imprime diagonales al final
 */

#include "main.h"

void print_diagonal(int n)
{
	int i = 1;
	int esp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			esp = 1;
			while (esp < i)
			{
				_putchar(' ');
				esp++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
