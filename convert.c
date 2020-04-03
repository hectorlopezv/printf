#include "libs.h"

char *convert(long int num, int base)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long   n;

	array = "0123456789abcdef";
	n = num;
	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';
	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);
	if (sign)
		*--ptr = sign;
	return (ptr);
}




int _putchar(char **buffer,char formato,int * total_chars)
{
  (*total_chars)++;

  if (*total_chars < 4)
  {
    (*buffer)[*total_chars] = formato;

  }else
  {
    
    write(1,*buffer,*total_chars);
    free(*buffer);
    *buffer = malloc(4);
    *total_chars = 0;
    (*buffer)[*total_chars] = formato;


  }
  return (1);
  
}

int handle_format(char **buffer,char formato,int * total_chars,va_list list)
{
  int i;
  int (*get)(char **, char, int *,va_list list);
  
  i = 0;
 

  get = get_format(formato);
  
  if (get == NULL)
	{
    
    return(-1);
	}
  else
  {
    i += get(buffer,formato,total_chars,list);
  }



  return (i);


}