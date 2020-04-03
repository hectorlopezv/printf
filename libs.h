
#include <stdlib.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>



typedef struct formats
{
		char c;
		int (*f)(char **buffer,char formato,int * total_chars,va_list list);
} formats_t;


char *convert(long int num, int base);

int handle_format(char **buffer,char formato,int * total_chars,va_list list);

int _putchar(char **buffer,char formato,int * total_chars);


int print_char(char **buffer,char formato,int * total_chars,va_list list);


int _printf(char * format, ...);

int print_S(char **buffer,char formato,int * total_chars,va_list list);

int print_int(char **buffer,char formato,int * total_chars,va_list list);


int print_percentage_literal(char **buffer,char formato,int * total_chars,va_list list);

int print_to_binary(char **buffer,char formato,int * total_chars,va_list list);

int print_rot13(char **buffer,char formato,int * total_chars,va_list list);

int rev_string(char **buffer,char formato,int * total_chars,va_list list);


int print_pointer_void(char **buffer,char formato,int * total_chars,va_list list);

int print_u(char **buffer,char formato,int * total_chars,va_list list);

int print_o(char **buffer,char formato,int * total_chars,va_list list);

int print_x(char **buffer,char formato,int * total_chars,va_list list);

int print_X(char **buffer,char formato,int * total_chars,va_list list);

int print_str(char **buffer,char formato,int * total_chars,va_list list);

int (*get_format(char format))(char **buffer,char formato,int * total_chars,va_list list);