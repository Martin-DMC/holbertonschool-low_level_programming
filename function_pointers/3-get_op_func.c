/**
 * get_op_func - recibe un signo y retorna la funcion que cohinside
 * @s: puntero al signo
 *
 * Return: la funcion o NULL
 */
#include <string.h>
#include "3-calc.h"
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (s && strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
