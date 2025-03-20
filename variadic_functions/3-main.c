#include "variadic_functions.h"
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    print_all("csis", 'B',"", 3, "stSchool");
    print_all("coias", 'B', 3, NULL);
    print_all("caies", 'B', 3, "stSchool");
    print_all("", 'B', 3, "stSchool");
    return (0);
}
