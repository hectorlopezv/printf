#include "holberton.h"

/**
 *
 *
 */
int print_int(char *buffer, va_list list,int index_buffer)
{
	return(0);
}

/**
 *
 *
 */
int print_str(char *buffer, va_list list,int index_buffer)
{
	int i;
	i = 0;

	char * p = va_arg(list,char *);

	for (i = 0; p[i] != '\0'; ++i,index_buffer++)
	{
		buffer[index_buffer]  = p[i];
	}
	return (i - 1);
}

/**
 *
 *
 */
int print_char(char *buffer, va_list list,int index_buffer)
{

	buffer[index_buffer] = (char) va_arg(list,int);
	return (0);

}
