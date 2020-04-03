#include "holberton.h"

int print_x(char **buffer,char formato,int * total_chars,va_list list)
{
	int i;
	char *word;

	word = convert(va_arg(list, long int), 16);
	
	for (i = 0; word[i] != '\0'; ++i)
	{
      _putchar(buffer, word[i], total_chars);
	}

	return (i);

}



int print_X(char **buffer,char formato,int * total_chars,va_list list)
{
  	int i;
	char *word;

	word = convert(va_arg(list, unsigned  int), 16);

	for (i = 0; word[i] != '\0'; ++i)
	{
	
			if (word[i] > 96 && word[i] < 123)
			{
        _putchar(buffer, word[i] - 32, total_chars);
			}
			else
			{
       _putchar(buffer, word[i], total_chars);
			}

	}

	return (i);
}
