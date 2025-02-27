/**
 * _strncpy - copia texto
 * @dest: destino
 * @src: original
 * @n: cantidad
 *
 * Description: copia dos textos diferentes
 *
 * Return: retorna un puntero
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *r = dest;
	int i, j;

	i = 0;
	j = 0;
	if (src[0] == '\0')
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		if (src[j] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
	}

	return (r);
}
