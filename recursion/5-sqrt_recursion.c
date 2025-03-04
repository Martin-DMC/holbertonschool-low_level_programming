/**
 * calculo - calcula la raiz cuadrada
 * @n: numero
 * @b: bajo
 * @a: alto
 *
 * Return: valor
 */
int calculo(int n, int b, int a)
{
	int mid = (b + a) / 2;
	int cuadrado = mid * mid;

	if (b > a)
	{
		return (-1);
	}
	if (cuadrado == n)
	{
		return (mid);
	}
	else if (cuadrado > n)
	{
		return (calculo(n, b, mid - 1));
	}
	else
	{
		return (calculo(n, mid + 1, a));
	}
}
/**
 * _sqrt_recursion - devuelve la raiz cuadrada
 * @n: numero
 *
 * Return: resultado
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calculo(n, 0, n));
}
