/**
 * mayor_primo - encuentra el mayor primo
 * @n: numero
 *
 * Description: encuentra e imprime el mayor primo de un numero
 *
 * Return: el mayor primo de n
 */

#include <stdio.h>
#include <math.h>

long mayor_primo(long n)
{
	long factor = 2;
	while (n % factor == 0)
	{
		n /= factor;
	}
	for (factor = 3; factor <= sqrt(n); factor += 2)
	{
		while (n % factor == 0)
		{
			n /= factor;
		}
	}
	return (n > 1) ? n : factor;
}

/**
 * main - prueba la funcion
 *
 * Return: retorna 0
 */

int main(void)
{
	long n = 612852475143;

	printf("%ld\n", mayor_primo(n));

	return (0);
}
