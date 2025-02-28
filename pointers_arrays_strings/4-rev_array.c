/**
 * reverse_array - imprime array
 * @a: puntero
 * @n: cantidad
 *
 * Description: imprime un array invertido
 *
 * Return: retorna resultado
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
