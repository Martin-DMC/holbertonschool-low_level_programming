/**
 * print_most_numbers - imprime numeros
 *
 * Description: imprime de 0 a 9 en pantalla
 */
#include "main.h"

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
