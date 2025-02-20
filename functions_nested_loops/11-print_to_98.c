/**
 * print_to_98 - muestra secuencia
 * @n: numero
 *
 * Description: muestra secuencia hasta el 98
 * Return: retorna 0
 */
#include <stdio.h>

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			if (n >= 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
			if (n <= 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}

}
