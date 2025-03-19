#include <stdarg.h>
/**
 * sum_them_all - suma todos los valores que pasemos
 * @n: cantidad de volaroes de la lista
 *
 * Return: el resultado de la suma
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int resultado, valor;

	if (n == 0)
		return (0);

	va_start(args, n);
	resultado = 0;

	for (i = 0; i < n; i++)
	{
		valor = va_arg(args, int);
		resultado += valor;
	}

	va_end(args);

	return (resultado);

}
