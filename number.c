#include "libs.h"

int print_int(char **buffer,char formato,int * total_chars, va_list list)
{
	int i;
	char *p;

	p = convert(va_arg(list, int), 10);
	for (i = 0; p[i] != '\0' ; i++)
	{
      _putchar(buffer, p[i], total_chars);
	}


	return (i);
}

int print_to_binary(char **buffer,char formato,int * total_chars, va_list list)
{
	int i;
	char *p;

	p =  convert(va_arg(list, int), 2);

	for (i = 0; p[i] != '\0'; ++i)
	{
    _putchar(buffer, p[i], total_chars);
	}
  
	return (i);
}