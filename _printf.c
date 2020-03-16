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
}
