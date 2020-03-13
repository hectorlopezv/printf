#include "holberton.h"
#include <unistd.h>


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
	int j_temp = 0;
	int j_temp_2 = 0;
	int ocurrencias = 0;
	int (*get)(char *, va_list,int);

	va_start(arg, format);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);

	while (format[i])
	{
		if (j == 1024)
		{
			j = 0;
			free(buffer);
			buffer = malloc(1024);
			if (buffer == NULL)
				return (0);
		}
		if (format[i] != '%')
		{
			buffer[j] = format[i];
		}
		else
		{
			i++;
			get = get_format(format[i]);

			if( get != NULL)
			{
				j_temp  += get(buffer,arg,j);
				j += j_temp;
				ocurrencias++;
				j_temp_2 += j_temp;
				j_temp = 0;
			}
		}
		i++;
		j++;

	}
	printf("valor de J %d\n",j);
	printf("valor de I %d\n",i);
	printf("valor J_temp %d \n",j_temp);
	printf("valor ocurrencias %d\n",ocurrencias);
	write(1,buffer,(i - ocurrencias) + (j_temp_2));
	va_end(arg);
	free(buffer);
	return ((i - ocurrencias) + j_temp_2);
}

