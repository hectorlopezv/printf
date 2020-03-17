#include "holberton.h"

/**
 *print_to_binary - print int to binary
 *@buffer: buffer
 *@list:lista
 *@index_buffer: buffer
 *Return: return
 */

int print_to_binary(char *buffer, va_list list, int index_buffer)
{
	int i;
	char *p;

	p =  convert(va_arg(list, unsigned int), 2);

	for (i = 0; p[i] != '\0'; ++i, index_buffer++)
		buffer[index_buffer]  = p[i];
	return (i - 1);
}
