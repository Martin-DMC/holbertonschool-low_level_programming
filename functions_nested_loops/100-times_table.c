/**
 * print_times_table - imprime por pantalla
 * @n: numero
 *
 * Description: imprime las tablas por pantalla
 * Return: retorna 0
 */
#include "main.h"

void print_times_table(int n)
{
	int num, ope;
	int mul = 0;

	if (n <= 15 && n >= 0)
	{
		while (mul <= n)
		{
			num = 0;
			while (num <= n)
			{
				ope = mul * num;
				if (ope == 0 && num == 0)
				{
					_putchar(ope + '0');
				}
				else if (ope == 0 && num > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(ope + '0');
				}
				else if (ope > 0 && ope < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(ope + '0');
				}
				else if (ope >= 10 && ope < 100)
				{
					_putchar(' ');
					_putchar(ope / 10 + '0');
					_putchar(ope % 10 + '0');
				}
				else if (ope >= 100)
				{
					_putchar(ope / 100 + '0');
					_putchar((ope / 10) % 10 + '0');
					_putchar(ope % 10 + '0');
				}
				num++;
				if (num != n + 1)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			mul++;
		}
	}
}
