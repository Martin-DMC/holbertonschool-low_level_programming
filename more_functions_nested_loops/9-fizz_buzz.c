/**
 * main - imprime numeros
 *
 * Description: imprime numeros, fizz, buzz
 *
 * Return: retorna 0
 */
#include <stdio.h>

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (!(i == 100))
		{
			printf(" ");
		}
		i++;

	}
	printf("\n");

	return (0);
}
