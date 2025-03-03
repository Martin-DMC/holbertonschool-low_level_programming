/**
 * _strstr - devuelve puntero a la 1er coincidencia
 * @haystack: cadena
 * @needle: subcadena
 *
 * Return: retorna puntero
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	if (needle[i] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
