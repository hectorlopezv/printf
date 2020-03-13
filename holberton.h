#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

	struct formats
	{
		char c;
		void (*f)(char *, va_list);

	};

typedef struct formats format;

void print_int(char *buffer, va_list lista);
void print_str(char *buffer, va_list lista);
void print_char(char *buffer, va_list lista);
void (*get_format(char format))(char *, va_list);
int _printf(const char *format, ...);

#endif

