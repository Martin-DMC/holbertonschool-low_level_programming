/**
 * _strchr - elimina caracteres
 * @s: puntero
 * @c: caracter
 *
 * Return: retorna null o puntero
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] + 1)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
