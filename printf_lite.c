#include "holberton.h"

/**
 * _printf - function that works like printf
 * @format: arguments to check
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{	va_list arg;
	char *buffer;
	int i = 0, j = 0, j_temp = 0, j_temp_2 = 0, ocurrencias = 0;
	int (*get)(char *, va_list, int);

	va_start(arg, format);
	if (!format)
		return (-1);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);
	while (format[i])
	{
		if (j == 1024)
		{	j = 0;
			free(buffer);
			buffer = malloc(1024);
			if (buffer == NULL)
				return (0);
		}
		if (format[i] != '%')
			buffer[j] = format[i];
		else
		{	i++;
			get = get_format(format[i]);
			if (get == NULL)
			{
				free(buffer);

				return (-1);
			}
			if (get != NULL)
			{	j_temp  += get(buffer, arg, j);
				j += j_temp;
				ocurrencias++;
				j_temp_2 += j_temp;
				j_temp = 0;
			}
		}
		i++;
		j++;
	}
	write(1, buffer, (i - ocurrencias) + (j_temp_2));
	va_end(arg);
	free(buffer);
	return ((i - ocurrencias) + j_temp_2);
}

