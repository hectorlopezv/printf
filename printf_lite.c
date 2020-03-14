#include "holberton.h"

/**
 * _printf - function that works like printf
 * @format: arguments to check
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{	va_list arg;
	char *buffer;
	int (*get)(char *, va_list, int);
	int i = 0, j = 0, j_temp = 0, j_temp_2 = 0, ocurrencias = 0;
	int j_tt = 0;
	va_start(arg, format);
	if (format == NULL)
		return (-1);
	buffer = create_buffer(7000);
	if (buffer == NULL)
		return (-1);
	while (format[i] && format)
	{

		if (format[i] != '%')
		{
			buffer[j] = format[i];

		}
		else
		{	i++;
			get = get_format(format[i]);
			if (get == NULL)
			{
				if (i == 1 && format[i] == 0)
				{
					free(buffer);
					va_end(arg);
					return (-1);
				}
				else
				{	buffer[j] = format[i - 1];
					/*j_temp_2 += 1;*/
					j++;
					buffer[j] = format[i];
				}
			}
			if (get != NULL)
			{
				j_temp  += get(buffer, arg, j);
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
	va_end(arg), free(buffer);
	return ((i - ocurrencias) + j_temp_2 + j_tt);
}

/*	printf(" I %d \n",i);*/
/*	printf(" J %d \n",j);*/
/*	printf("Ocurrencia %d\n",ocurrencias);*/
/*	printf("Jtemp_2 %d\n",j_temp_2);*/

