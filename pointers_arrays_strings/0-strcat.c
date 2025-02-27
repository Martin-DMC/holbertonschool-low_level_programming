/**
 * _strcat - concatena texto
 * @dest: destino
 * @src: original
 *
 * Description: concatena dos textos diferentes
 *
 * Return: retorna un puntero
 */

char *_strcat(char *dest, char *src)
{
	char *r = dest;
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (r);
}
