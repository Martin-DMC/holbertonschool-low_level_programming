/**
 * _islower - verifica mayusculas
 * Description: verifica si un caracter es mayus o minus
 * Return: retorna 0
 */

#include <stdio.h>
#include "main.h"
#include <ctype.h>

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
