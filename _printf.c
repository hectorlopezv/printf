#include "holberton.h"

/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list arg;
	char *buffer;
	int i = 0;

	va_start(arg, format);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (NULL);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			get_format(format[i]);
		}
		else
		{
			buffer[i] = format[i];
		}
		i++;
	}

	write(1, buffer, _strlen(buffer));
	free(buffer);
	va_end(arg);
	return (0);
}

