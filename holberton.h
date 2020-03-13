#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

	struct formats
	{
		char c;
		int (*f)(char *, va_list,int a);

	};

int  print_int(char *buffer, va_list list, int a);
int print_str(char *buffer, va_list list,int a);
int print_char(char *buffer, va_list list,int a);
int (*get_format(char format))(char *, va_list,int a);
int _printf(const char *format, ...);

#endif

