#include "holberton.h"

/**
 * _printf - function that works like printf
 * @format: arguments to check
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{
	va_list arg;
	char *buffer;

	int i = 0, j = 0, j_temp = 0, j_temp_2 = 0, ocurrencias = 0, largo_format;
	int l = 0;
	int format_fail = 0;

	va_start(arg, format);
	buffer = create_buffer(4);
	if (format == NULL || buffer == NULL)
		return (-1);
	largo_format = _strlen(format);
	while (format[i] && format)
	{
		if (format[i] != '%')
		{
			if (j < 4)
			{
				buffer[j] = format[i];
				l++;
			}
			else
			{
				check_buffer(format, &buffer, i, &l, &j, &j_temp_2, &ocurrencias);
			}
		}
		else
		{
			i++;
			if (j < 4)
			{
				format_fail = handle_format(largo_format, arg, format, &buffer, i, &l,  &j, &j_temp_2, &ocurrencias, &j_temp);
				if (format_fail == -1)
					return (-1);
			}
			else
			{
				check_buffer(format, &buffer, i, &l,  &j, &j_temp_2, &ocurrencias);
				format_fail = handle_format(largo_format, arg, format, &buffer, i, &l, &j, &j_temp_2, &ocurrencias, &j_temp);
				if (format_fail == -1)
					return (-1);
			}
		}
		i++;
		j++;
	}
	va_end(arg);
	write(1, buffer, l);
	free(buffer);
	return ((i - ocurrencias) + j_temp_2);
}

