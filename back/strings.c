#include "holberton.h"


/**
 *print_str - print_str
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_str(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;
	char *null_case, *p;

	p = (char *) va_arg(list, char *);
	i = 0;

	null_case = "(null)";

	if (p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
      printing_char_1(buffer, null_case[i], j, l);
		}

		return (i - 1);
	}

	/* no null case*/
	for (i = 0; p[i]; i++, (*j)++)
	{
      printing_char_1(buffer, p[i], j, l);

	}
	return (i - 1);
}



/**
 *print_S - print_str
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_S(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	
	return (1);
}


/**
 *print_rot13 - print_str
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_rot13(char **buffer, va_list list, int  *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int a, b, i, length;
	char *p, *p1;
	char *null_case;

	char test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char res[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	p = va_arg(list, char *);
	if (p == NULL)
	{
		null_case = "(null)";
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
      printing_char_1(buffer, null_case[i], j, l);
		}
    return(i - 1);
	}

	length = _strlen(p + 1);
	p1 = create_buffer(length);

	/* fill the string*/
	for (i = 0; p[i] != 0; i++)
	{
		p1[i]  = p[i];
	}

	for (a = 0; p1[a] != '\0'; a++)
	{
		for (b = 0; test[b] != '\0'; b++)
		{
			if (p1[a] == test[b])
			{
				p1[a] = res[b];
				break;
			}
		}
	}

	for (i = 0; p1[i] != '\0'; i++, (*j)++)
	{
      printing_char_1(buffer, p[i], j, l);
	}

	free(p1);
	return (i - 1);
}


/**
 *rev_string - print_str
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */




int rev_string(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int index, length;
	char *temp_2, *p;

	temp_2 = "(null)";
	p = (char *) va_arg(list, char *);

	length = _strlen(p);

	if (p == NULL)
	{
		for (index = 0; temp_2[index] != '\0'; index++, (*j)++)
		{
      printing_char_1(buffer, temp_2[index], j, l);
		}
		return (index - 1);
	}

	/* imprimir de final atras*/

	for (index = length; index >= 0; --index, (*j)++)
	{
      printing_char_1(buffer, p[index], j, l);
	}
	return (length + 1);
}


/**
 *write_0x - print_str
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

void  write_0x(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	char *word;
	int i;

	i = 0;
	word = "\\x";
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
      printing_char_1(buffer, word[i], j, l);
  }
}

