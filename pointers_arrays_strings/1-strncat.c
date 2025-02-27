/**
 * _strncat - concatena texto
 * @dest: destino
 * @src: original
 * @n: cantidad
 *
 * Description: concatena dos textos diferentes
 *
 * Return: retorna un puntero
 */
char *_strncat(char *dest, char *src, int n)
{
	char *r = dest;
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (r);
}
