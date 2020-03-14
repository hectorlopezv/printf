#include "holberton.h"

/**
 * get_format - function that return the text format
 *
 * @format: char to check
 * Return: return format, return null if error
 */

int (*get_format(char format))(char *, va_list, int)
{
	int i;

	formats_t formato[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_str},
		{'%', print_percentage_literal},
		{'b', print_to_binary},
		{'\0', NULL}
	};


	i = 0;


	while (i < 6)
	{
		if (format == formato[i].c)
			return (formato[i].f);

		i++;
	}
	return (NULL);
}

