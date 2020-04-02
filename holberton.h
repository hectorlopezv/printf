#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>


/**
  *struct formats - Struct formats
  *
  *@c: the format
  * @f: The function associated
  */

typedef struct formats
{
		char c;
		int (*f)(char **, int *, va_list);
} formats_t;

int _strlen(const char *s);

char *convert(long int, int);

int handle_format(char **, char, int *, va_list);

int _putchar(char **, char, int *);

int print_char(char **, int *, va_list);

int _printf(char *format, ...);

int print_S(char **, int *, va_list);

int print_int(char **, int *, va_list);

int print_percentage_literal(char **, int *, va_list);

int print_to_binary(char **, int *, va_list);

int print_rot13(char **, int *, va_list);

int rev_string(char **, int *, va_list);

int print_pointer_void(char **, int *, va_list);

int print_u(char **, int *, va_list);

int print_o(char **, int *, va_list);

int print_x(char **, int *, va_list);

int print_X(char **, int *, va_list);

int print_str(char **, int *, va_list);

int (*get_format(char format))(char **, int *, va_list);

#endif
