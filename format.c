#include "holberton.h"

/**
 *
 *
 */
int print_percentage_literal(char *buffer, va_list list,int index_buffer)
{
	buffer[index_buffer] = '%';

	return (0);
}


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
	char * null_case = "(null)";
	printf("hello\n");
	char * p = (char *) va_arg(list,char *);
	printf("HOLABBE\n");
	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i,index_buffer++)
		{
			buffer[index_buffer]  = null_case[i];
		}
		return (i - 1);

	}

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
