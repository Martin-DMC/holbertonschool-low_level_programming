/**
 * string_toupper - combierte a mayuscula
 * @s: puntero
 *
 * Return: retorna el puntero
 */
#include <ctype.h>
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (islower(s[i]))
		{
			s[i] = s[i] - 32;
		}
		i++;

	}

	return (s);
}
