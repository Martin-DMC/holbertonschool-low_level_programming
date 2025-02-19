/**
 * times_table - imprime por pantalla
 *
 * Description: imprime las tablas por pantalla
 * Return: retorna 0
 */
#include "main.h"

void times_table(void)
{
	int num, ope;
	int mul = 0;

	while (mul < 10)
	{
		num = 0;
		while (num < 10)
		{
			ope = mul * num;
			if (ope == 0 && num == 0)
			{
				_putchar(ope + '0');
			}
			else if (ope == 0 && num > 0)
			{
				_putchar(' ');
				_putchar(ope + '0');
			}
			else if (ope > 0 && ope < 10)
			{
				_putchar(' ');
				_putchar(ope + '0');
			}
			else if (ope >= 10)
			{
				_putchar(ope / 10 + '0');
				_putchar(ope % 10 + '0');
			}
			num++;
			if (num != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		mul++;
	}
}
