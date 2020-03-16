#include "holberton.h"

int (*get_format(char format))(char *, va_list, int)
{
	int i;

	i = 0;
	struct formats formato[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_str},
		{'%', print_percentage_literal},
		{'\0', NULL}
	};

	while (i < 5)
	{
		if (format == formato[i].c)
			return (formato[i].f);

		i++;
	}
	return (NULL);
}

