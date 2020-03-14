#include "holberton.h"

/**
 * print_percentage_literal - function
 * @buffer: char to check
 * @list: argument to check
 * @index_buffer: arguments counter
 * Return: 0 on success
 */
int print_percentage_literal(char *buffer,
		__attribute__((unused))va_list list, int index_buffer)
{
	buffer[index_buffer] = '%';
	return (0);
}

/**
 * print_int - function
 * @buffer: char to check
 * @list: argument to check
 * @index_buffer: arguments counter
 * Return: 0 on success
 */
int print_int(char *buffer, va_list list, int  index_buffer)
{
	int i;
	char *p;

	p =  convert(va_arg(list, int), 10);
	for (i = 0; p[i] != '\0'; ++i, index_buffer++)
		buffer[index_buffer]  = p[i];

	return (i - 1);
}

/**
 * print_str - function
 * @buffer: char to check
 * @list: argument to check
 * @index_buffer: arguments counter
 * Return: 0 on success
 */
int print_str(char *buffer, va_list list, int  index_buffer)
{
	int i, j;
	char *null_case;
	char *p = (char *) va_arg(list, char *);

	i = 0;
	null_case = "(null)";

	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i, index_buffer++)
			buffer[index_buffer]  = null_case[i];

		return (i - 1);
	}

	for (i = 0; p[i] != '\0'; ++i, index_buffer++)
	{
		if (index_buffer == 1024)
		{
			buffer[index_buffer]  = p[i];
			j += i;
			write(1, buffer, 1024), j = 0, i = 0;
			/*buffer[j] = '\0';*/
			continue;
		}

		buffer[index_buffer]  = p[i];

	}
	return ((j + i) - 1);
}

/**
 * print_char - function
 * @buffer: char to check
 * @list: argument to check
 * @index_buffer: arguments counter
 * Return: 0 on success
 */
int print_char(char *buffer, va_list list, int index_buffer)
{

	buffer[index_buffer] = (char) va_arg(list, int);
	return (0);
}

/**
 *create_buffer - create dynamic buffer
 *@size: size of the buffer
 *Return: return buffer
 */

char *create_buffer(int size)
{
	char *buffer;

	buffer = malloc(size);
	if (buffer == NULL)
	{
		return (NULL);
	}
	return (buffer);

}

