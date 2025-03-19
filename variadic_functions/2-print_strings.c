#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * print_strings - imprime los str que le pasamos con un separador
 * @separator: separador
 * @n: cantidad de valores
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *valor;
	char *nil = "(nil)", *c_vacia = "\0";

	if (n == 0 && separator != NULL)
		printf("\n");

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			valor = va_arg(args, char *);
			if (valor == NULL && i == 0)
				printf("%s%s", nil, separator);
			else if (i == (n - 1))
				printf("%s\n", valor);
			else if (strcmp(valor, c_vacia) == 0)
				printf("%s%s", nil, separator);
			else
				printf("%s%s", valor, separator);
		}
		else
		{
			valor = va_arg(args, char *);
			if (valor == NULL && i == 0)
				printf("%s", nil);
			else if (i == (n - 1))
				printf("%s\n", valor);
			else if (strcmp(valor, c_vacia) == 0)
				printf("%s", nil);
			else
				printf("%s", valor);
		}
	}
	va_end(args);

}
