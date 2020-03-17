#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct formats - Struct formats
 *
 * @c: the format
 * @f: The function associated
 */
	typedef struct formats
	{
		char c;
		int (*f)(char *, va_list, int);
	} formats_t;

int  print_int(char *buffer, va_list list, int  a);
int print_str(char *buffer, va_list list, int  a);
int print_char(char *buffer, va_list list, int  a);
int print_percentage_literal(char *buffer, va_list list, int a);
int (*get_format(char format))(char *, va_list, int a);
int _printf(const char *format, ...);
char *convert(long int num, int base);
char *create_buffer(int size);
int print_to_binary(char *buffer, va_list list, int a);
int print_pointer(char *buffer, va_list list, int a);
int print_rot13(char *buffer,va_list list ,int index_buffer);

#endif

