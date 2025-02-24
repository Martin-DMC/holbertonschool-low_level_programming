/**
 * print_numbers - imprime numeros
 *
 * Description: imprime de 0 a 9 en pantalla
 */
#include "main.h"

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
