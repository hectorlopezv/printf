#include "libs.h"



int print_char(char **buffer,char formato,int * total_chars,va_list list)
{
  char p;

	p = (char) va_arg(list, int);

  _putchar(buffer, p, total_chars);

	return (1);

}




int print_S(char **buffer,char formato,int * total_chars,va_list list)
{
  return(0);
}


int print_percentage_literal(char **buffer,char formato,int * total_chars,va_list list)
{
	char p;

	p = '%';

  _putchar(buffer, p, total_chars);

	return (1);
}



int print_rot13(char **buffer,char formato,int * total_chars,va_list list)
{
  int a, b, i, length,j;
	char *p, *p1;
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
	/* fill the string*/
	for (i = 0; p[i] != '\0'; i++)
	{
		string[i]  = p[i];
	}
  string[i]  = p[i];

	for (a = 0; p1[a] != '\0'; a++)
	{
		for (b = 0; test[b] != '\0'; b++)
		{
			if (p1[a] == test[b])
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

int rev_string(char **buffer,char formato,int * total_chars,va_list list)
{
  int index, length;
	char *temp_2, *p;

	temp_2 = "(null)";
	p = (char *) va_arg(list, char *);

	length = strlen(p) - 1;

	if (p == NULL)
	{
		for (index = 0; temp_2[index] != '\0'; index++)
		{
      _putchar(buffer, temp_2[index], total_chars);
		}
		return (index);
	}

	/* imprimir de final atras*/

	for (index = length; index >= 0; --index)
	{
    _putchar(buffer, p[index], total_chars);
	}

	return (length + 1);
}


int print_pointer_void(char **buffer,char formato,int * total_chars,va_list list)
{
  return(0);
}

int print_u(char **buffer,char formato,int * total_chars,va_list list)
{
  return(0);
}

int print_o(char **buffer,char formato,int * total_chars,va_list list)
{
  return(0);
}

int print_x(char **buffer,char formato,int * total_chars,va_list list)
{
  return(0);
}

int print_X(char **buffer,char formato,int * total_chars,va_list list)
{
  return(0);
}

int print_str(char **buffer,char formato,int * total_chars,va_list list)
{
	int i;
	char *null_case, *p;

	p = (char *) va_arg(list, char *);
	i = 0;

	null_case = "(null)";

	if (p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i)
		{
      _putchar(buffer, null_case[i], total_chars);
		}

		return (i);
	}

	/* no null case*/
	for (i = 0; p[i]; i++)
	{
       _putchar(buffer, p[i], total_chars);

	}
	return (i);
}
