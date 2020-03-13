#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

	struct formats
	{
		char c;
		void (*f)(char *, va_list,int a);

	};

void print_int(char *buffer, va_list list, int a);
void print_str(char *buffer, va_list list,int a);
void print_char(char *buffer, va_list list,int a);
void (*get_format(char format))(char *, va_list,int a);
int _printf(const char *format, ...);

#endif

