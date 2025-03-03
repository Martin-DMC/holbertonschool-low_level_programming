/**
 * _memset - llena la memoria
 * @s: puntero
 * @b: variable
 * @n: numero
 *
 * Description: llena la memoria con byte constante
 *
 * Return: retorna
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *r = s;
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (r);
}
