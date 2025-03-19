#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - imprime los numeros variables que le pasemos
 * @separator: =! NULL se usa para separar los valores
 * @n: cantidad de valores
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int valor;

	if (n == 0 && separator != NULL)
		printf("%s\n", separator);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			valor = va_arg(args, int);
			if (i == (n - 1))
				printf("%d\n", valor);
			else
				printf("%d%s", valor, separator);
		}
		else
		{
			valor = va_arg(args, int);
			if (i == (n - 1))
				printf("%d\n", valor);
			else
				printf("%d", valor);
		}
	}

}
