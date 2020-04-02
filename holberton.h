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
		int (*f)(char **, va_list, int  *, int *, int *, int *, int *);
} formats_t;

char *convert_2(unsigned long int num, unsigned long int base);

int _printf(const char *format, ...);

char *convert(long int num, int base);

int printing_char_1(char **buffer, char word, int *j, int *l);
char *create_buffer(int size);

int _strlen(const char *s);

void check_buffer(const char *format, char **buffer, int i, int *l, int *j, int *j_temp_2, int *ocurrencias);

int print_percentage_literal(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_int(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_str(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

void  write_0x(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int printing_char(char **buffer, char *word, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_S(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_char(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_char(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_u(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_o(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_x(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_X(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_to_binary(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_to_binary(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int rev_string(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);


int handle_format(int largo_format, va_list arg, const char *format, char **buffer, int i, int *l,  int *j, int *j_temp_2, int *ocurrencias, int *j_temp);


int (*get_format(char format))(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_rot13(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

int print_pointer_void(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp);

#endif

