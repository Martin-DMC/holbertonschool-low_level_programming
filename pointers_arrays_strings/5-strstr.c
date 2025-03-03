/**
 * _strstr - devuelve puntero a la 1er coincidencia
 * @haystack: cadena
 * @needle: subcadena
 *
 * Return: retorna puntero
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (needle[i])
	{
		j = 0;
		while (haystack[j])
		{
			if (needle[i] == haystack[j])
			{
				return (&haystack[j]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
