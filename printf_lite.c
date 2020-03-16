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
	int i = 0, j = 0;
	void (*get)(char *, va_list);

	va_start(arg, format);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (NULL);

	while (format[i])
	{
		if (j == 1024)
		{
			j = 0;
			free(buffer);
			buffer = malloc(1024);
			if (buffer == NULL)
				return (NULL);
		}
		if (format[i] != %)
		{
			buffer[j] = format[i];
		}
		else
		{
			i++;
			get = get_format(format[i]);
			get(buffer, arg, j);
			free(buffer);
			buffer = malloc(1024);
			if (buffer == NULL)
				return (NULL);
		}
		i++;
		j++;

	}
	va_end(arg);
}

