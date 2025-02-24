/**
 * _isdigit - ve numeros
 * @c: caracter
 *
 * Description: retorna 1 si es numero
 *
 * Return: 0 o 1
 */
#include "main.h"
#include <ctype.h>

int _isdigit(int c)
{
	if (isdigit((unsigned char)c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
