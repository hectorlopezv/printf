#include "holberton.h"

/**
 *handle_format - handle_format
 *@largo_format: largo_format
 *@arg: arg
 *@format: format
 *@buffer: buffer
 *@i: i
 *@l: l
 *@j: j
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int handle_format(int largo_format, va_list arg, const char *format, char **buffer, int i, int *l, int *j, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int (*get)(char **, va_list, int *, int *, int *, int *, int *);

	get = get_format(format[i]);

	if (get == NULL)
	{
		if (format[largo_format] == 10)
		{
			if (*j < 4)
			{
				(*buffer)[*j] = format[i - 1];
				(*l)++;
				(*j)++;
				if (*j < 4)
				{
					(*buffer)[*j] = format[i];
					(*l)++;
				}
				else
				{
					check_buffer(format, buffer, i, l, j, j_temp_2, ocurrencias);
				}
			}
			else
			{
				write(1, *buffer, *j);
				free(*buffer);
				*buffer = create_buffer(4);
				*j = 0;
				*l = 0;
				(*buffer)[*j] = format[i - 1];
				(*l)++;
				(*buffer)[*j] = format[i];
				(*l)++;
			}
		}
		else if ((i == 1 && format[i] == 0))
		{
			free(*buffer);
			va_end(arg);
			return (-1);
		}
		else if (format[largo_format] != 10)
		{
			write(1, *buffer, (i - *ocurrencias) + (*j_temp_2));
			free(*buffer);
			va_end(arg);
			return (-1);
		}
	}

	if (get != NULL)
	{
		/*case not null*/
		(*j_temp)  += get(buffer, arg, j, l, j_temp_2, ocurrencias, j_temp);
		*j += *j_temp;
		(*ocurrencias)++;
		*j_temp_2 += *j_temp;
		*j_temp = 0;
	}
	return (0);
}

