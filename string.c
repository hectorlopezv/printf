#include "holberton.h"



int print_char(char **buffer, char formato, int * total_chars, va_list list)
{
  char p;

	p = (char) va_arg(list, int);

  _putchar(buffer, p, total_chars);

	return (1);

}




int print_S(char **buffer, char formato, int * total_chars, va_list list)
{
  int i;
	char *null_case, *p, *hex, *x_word;

	i = 0;
	p = va_arg(list, char *);
	null_case = "(null)";
	x_word = "0";
	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i)
		{
      _putchar(buffer, null_case[i], total_chars);
		}

		return (i);
	}
	
	for (i = 0; p[i] != '\0'; ++i)
	{
			if ((p[i] > 0 && p[i] < 32) || p[i] >= 127)
			{
				hex = convert(p[i], 16);
        _putchar(buffer, '\\', total_chars);
        _putchar(buffer, 'x', total_chars);
				if (strlen(hex) - 1  == 0)
				{
					if (hex[0] >= 97 && hex[0] <= 102)
					{
						hex[0] = hex[0] - 32;
					}
          _putchar(buffer, hex[0], total_chars);
				}

				else if (strlen(hex) - 1 == 1)
				{
					if (hex[0] >= 97 && hex[0] <= 102)
					{
						hex[0] = hex[0] - 32;
					}
					if (hex[1] >= 97 && hex[1] <= 102)
					{
						hex[1] = hex[1] - 32;
					}
          _putchar(buffer, hex[0], total_chars);
          _putchar(buffer, hex[1], total_chars);
				}

			}
			else
			{
        _putchar(buffer, p[i], total_chars);
			}
	}
	return (i);
}


int print_percentage_literal(char **buffer, char formato, int * total_chars, va_list list)
{
	char p;

	p = '%';

  _putchar(buffer, p, total_chars);

	return (1);
}



int print_rot13(char **buffer, char formato, int * total_chars, va_list list)
{
  int a, b, i, length,j;
	char *p;
	char *null_case;
  char string[100];

  a=0,b=0,i=0,length=0,j=0;

	char test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char res[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	p = va_arg(list, char *);
	if (p == NULL)
	{
		null_case = "(null)";
		for (i = 0; null_case[i] != '\0'; ++i)
		{
      _putchar(buffer, null_case[i], total_chars);
		}
    return(i);
	}
	for (i = 0; p[i] != '\0'; i++)
	{
		string[i]  = p[i];
	}
  string[i]  = '\0';

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; test[b] != '\0'; b++)
		{
			if (string[a] == test[b])
			{
				string[a] = res[b];
				break;
			}
		}
	}

	for (j = 0; string[j] != '\0'; j++)
	{
     _putchar(buffer, string[j], total_chars);

	}
	return (j);

}
