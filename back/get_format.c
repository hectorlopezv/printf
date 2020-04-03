#include "holberton.h"

/**
 * get_format - function that return the text format
 * @format: buffer
 * Return: return format, return null if error
 */

int (*get_format(char format))(char **buffer, va_list list, int  *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;

	formats_t formato[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_str},
		{'%', print_percentage_literal},
		{'b', print_to_binary},
		{'R', print_rot13},
		{'r', rev_string},
		{'p', print_pointer_void},
		{'u', print_u},
		{'o', print_o},
		{'x', print_x},
		{'X', print_X},
		{'S', print_S},
		{'\0', NULL}
	};


	i = 0;


	while (i < 16)
	{
		if (format == formato[i].c)
			return (formato[i].f);

		i++;
	}
	return (NULL);
}

