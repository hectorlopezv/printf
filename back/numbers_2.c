#include "holberton.h"

/**
 *print_to_binary - print_int
 *@buffer: buffer
 *@list: lis
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurren
 *@j_temp: j_t
 *Return: return
 */

int print_to_binary(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;
	char *p;

	p =  convert(va_arg(list, int), 10);
	for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
        printing_char_1(buffer, p[i], j, l);
	}
	return (i - 1);
}
