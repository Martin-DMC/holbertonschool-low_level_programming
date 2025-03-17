#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - imprime un nombre invocando funciones
 * @name: nombre a imprimir
 * @f: funcion que lo imprime
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
