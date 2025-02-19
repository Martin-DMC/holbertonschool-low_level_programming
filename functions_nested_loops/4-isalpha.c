/**
 * _isalpha - verifica mayusculas
 * @c: caracter
 *
 * Description: verifica si un caracter es mayus o minus
 * Return: retorna 0
 */

#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
