/**
 * puts2 - imprime mensaje
 * @str: puntero
 *
 * Description: imprime los otros caracteres
 */
#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && i <= 444)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
