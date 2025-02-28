/**
 * cap_string - combierte en mayus
 * @s: puntero
 *
 * Description: combierte la primer letra de una palabra
 *
 * Return: puntero
 */
#include <ctype.h>

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (islower(s[0]))
		{
			s[0] = s[0] - 32;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		s[i] == '}')
		{
			if (islower(s[i + 1]))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
