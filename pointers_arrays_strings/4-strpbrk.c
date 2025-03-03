/**
 * _strpbrk - devuelve puntero al 1er caracter igual
 * @s: puntero
 * @accept: puntero
 *
 * Return: puntero al 1er char
 */

char *_strpbrk(char *s, char *accept)
{
	int j, i = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
