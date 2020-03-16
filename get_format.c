#include "holberton.h"

/**
 *
 *
 *
 */
int get_format(char s)
{
	int i = 0;

	format_t formats[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_literal},
		{'d', print_int},
		{'i', print_int},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*(formats[i].format) == s)
			return formats[i].f;
		i++;
	}
	return (NULL);
}