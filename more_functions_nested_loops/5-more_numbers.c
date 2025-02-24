/**
 * more_numbers - imprime numeros
 *
 * Description: imprime de 0 a 14 en pantalla
 */
#include "main.h"

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		j++;
		_putchar('\n');
	}
}
