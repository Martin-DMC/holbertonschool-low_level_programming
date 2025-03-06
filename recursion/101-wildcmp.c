/**
 * wildcmp - verifica si dos cadenas son iguales
 * @s1: 1er cadena
 * @s2: 2da cadena
 *
 * Return: 1 si, 0 no
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) ||
		(*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
