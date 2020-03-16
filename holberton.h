#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int get_format(char s);
int _strlen(char *s);
int _printf(const char *format, ...);

typedef struct format
{
    char *format;
    int (*f)();
} format_t;

#endif
