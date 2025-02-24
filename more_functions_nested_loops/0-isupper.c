/**
 * _isupper - ve mayusculas
 * @c: caracter
 *
 * Description: retorna 1 si es mayuscula
 *
 * Return: 0 o 1
 */
#include "main.h"
#include <ctype.h>

int _isupper(int c)
{
	if (isupper((unsigned char)c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
