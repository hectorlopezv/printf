#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

	struct formats[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
	};
typedef struct formats format;
int _printf(const char *format, ...);

#endif

