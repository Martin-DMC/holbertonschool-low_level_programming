/**
 * print_number - imprime numeros
 * @n: numero
 *
 * Description: imprime numeros por pantalla
 */

#include "main.h"
#include <limits.h>

void print_number(int n)
{
	if (n == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
