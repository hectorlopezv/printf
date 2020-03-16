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
	void (*get)(char *, va_list);

	va_start(arg, format);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (NULL);

	while (format[i])
	{
		if (format[i] != %)
		{
			buffer[i] = format[i];
		}
		else
		{
			i++;
			get = get_format(format[i]);
			get(buffer, arg);
			free(buffer);
			buffer = malloc(1024);
		}
		i++;

	}
	va_end(arg);

}

