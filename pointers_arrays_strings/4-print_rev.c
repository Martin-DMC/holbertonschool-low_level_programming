/**
 * print_rev - imprime mensaje
 * @s: puntero
 *
 * Description: imprime un mensaje invertido por pantalla
 */
#include "main.h"

void print_rev(char *s)
{
	int i = mi_strlen(s) -1;


	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
