#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - dice el ultimo numero
 * Description: dice si el ultimo numero de n
 * Return: retorna 0
 */
int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_d = n % 10;
	if (last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_d);
	}
	else if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	}
	else if (last_d < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	}

	return (0);
}
