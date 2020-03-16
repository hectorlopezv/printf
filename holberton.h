#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.
#include <stdarg.h>
#include <stdio.h>

struct format = 
{
	char c;
	void (*f)(va_list,char);
};
	formato formats[] = {
		{'d', print_d},
		{'i', print_d},
		{'c', print_c},
		{'s', print_c},
		{'%', print_percent},
		{'b', print_b},
		{'r', print_r},
		{'R', print_rot13},
		{'u', print_u},
		{'o', print_o},
		{'x', print_x},
		{'X', print_X},
		{'S', print_S},
		{'p', print_p},
		{'\0', NULL}
	};

typedef struct format formato;

#endif

