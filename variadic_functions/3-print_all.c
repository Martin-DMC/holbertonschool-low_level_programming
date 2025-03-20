#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - imprime valores de cualquier formato
 * @format: formato ordenado de los valores
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0, i, c, a = 0;
	double f;
	char *s, *nil = "(nil)";

	va_start(args, format);
	while (format && format[j])
	{
		if (j >= 1 && a != 0)
			printf(", ");
		a = 0;
		switch (format[j])
		{
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				a = 1;
				break;
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				a = 1;
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				a = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = nil;
				printf("%s", s);
				a = 1;
				break;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
