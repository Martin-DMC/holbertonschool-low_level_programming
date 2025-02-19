/**
 * jack_bauer - imprime mensajes
 *
 * Description: imprime todos los minutos de un dia
 * Return: retorna 0
 */
#include "main.h"

void jack_bauer(void)
{
	int hora;
	int min;

	for (hora = 0; hora < 24; hora++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hora / 10 + '0');
			_putchar(hora % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
