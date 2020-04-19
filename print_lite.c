#include "holberton.h"
#include "string.h"
/**
 *_printf - print_lite
 *@format: format
 *Return: printf
 */

int _printf(char *format, ...)
{
	int i, total_chars, p, p2, temp;
	char *buffer;
	va_list arg;

	va_start(arg, format);
	i = 0, total_chars = -1, p = 0, p2 = 0, temp = 0;

	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			p += _putchar(&buffer, format[i], &total_chars);
		}
		else
		{
			i++;
			temp = handle_format(&buffer, format[i], &total_chars, arg);
			if (temp == -1)
			{
				if (format[_strlen(format) - 1] == 10)
				{
					p2 += _putchar(&buffer, format[i - 1], &total_chars);
					p2 += _putchar(&buffer, format[i], &total_chars);
				}
				else
				{ p2 = 0, p = -1;
					break; }
			}
			else
			{	p2 += temp, temp = 0; }
		} i++; }
	write(STDOUT_FILENO, buffer, total_chars + 1);
	free(buffer), va_end(arg);
	printf("p %d \n",p);
	printf("p2 %d \n",p2);
	return (p + p2);
}
