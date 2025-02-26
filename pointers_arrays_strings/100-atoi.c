/**
 * _atoi - devuelve un int
 * @s: puntero
 *
 * Return: retorna el valor
 */
#include <limits.h>

int _atoi(char *s)
{
	int sig = 1;
	int resultado = 0;
	int encontrado = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sig *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (resultado > (INT_MAX / 10) ||
			(resultado == INT_MAX / 10 && (*s - '0') > (INT_MAX % 10)))
			{
				return ((sig == 1) ? INT_MAX : INT_MIN);
			}
			resultado = resultado * 10 + (*s - '0');
			encontrado = 1;
		}
		else if (encontrado)
		{
			break;
		}
		s++;
	}
	return (resultado * sig);
}
