/**
 * _puts - imprime mensajes
 * @str: mensaje
 *
 * Description: imprime un mensaje sin usar libreria standar
 */

#include "main.h"

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
