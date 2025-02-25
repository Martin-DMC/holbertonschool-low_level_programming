/**
 * mi_strlen - funcion
 * @s: puntero
 *
 * Return: retorna valor
 */
int mi_strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * print_rev - imprime mensaje
 * @s: puntero
 *
 * Description: imprime un mensaje invertido por pantalla
 */
#include "main.h"

void print_rev(char *s)
{
	int i = mi_strlen(s) - 1;


	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
