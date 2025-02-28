/**
 * leet - cambia letras
 * @s: puntero
 *
 * Return: devuelve resultado
 */

char *leet(char *s)
{
	char comun[] = "aeotlAEOTL";
	char cambio[] = "4307143071";
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (comun[j] != '\0')
		{
			if (s[i] == comun[j])
			{
				s[i] = cambio[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);

}
