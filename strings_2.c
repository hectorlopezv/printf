#include "holberton.h"


/**
 *print_percentage_literal - print_percentage_literal
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_percentage_literal(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	char p;

	p = '%';

  printing_char_1(buffer, p, j, l);

	return (0);
}


/**
 *_strlen - print_str
 *@s: s
 *Return: return the string length
 */

int _strlen(const char *s)
{
	int counter;
	int i;

	i = 0;
	counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	counter--;
	return (counter);
}


int printing_char_1(char **buffer, char word, int *j, int *l)
{
	int i;
	char *null_case;
	char p = word;

	i = 0;

	if (*j < 1000)
	{
		(*buffer)[*j]  = p;
		(*l)++;
	}
	else
	{
		write(1, *buffer, *j);
		free(*buffer);
		*buffer = create_buffer(1000);
		*j = 0;
		*l = 0;
		(*buffer)[*j] = p;
		(*l)++;
	}

	return (0);
}

/**
 *printing_char - print_str
 *@buffer: buffer
 *@word: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int printing_char(char **buffer, char *word, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;
	char *null_case;
	char *p = word;

	i = 0;
	null_case = "(null)";

	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
        printing_char_1(buffer, null_case[i], j, l);
		}

		return (i - 1);
	}

	for (i = 0; p[i] != '\0'; i++, (*j)++)
	{
      printing_char_1(buffer, p[i], j, l);
	}
	return (i - 1);
}


/**
 *print_char - print_str
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_char(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	char p;

	p = (char) va_arg(list, int);
  printing_char_1(buffer, p, j, l);

	return (0);

}

/**
 *print_pointer_void - print_pointer_void
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp: j_temp
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *Return: return
 */

int print_pointer_void(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;
	char *word, *null_case;
	char p[3];

	p[0] = '0', p[1] = 'x', p[2] = '\0';
	word = convert_2(va_arg(list, unsigned long int), 16);
	null_case = "(nil)";

	if (word[0] == '0')
	{
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
      printing_char_1(buffer, null_case[i], j, l);
    }
		return (i - 1);
	}

  for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
      printing_char_1(buffer, p[i], j, l);
	}

	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
      printing_char_1(buffer, word[i], j, l);
	}

	return (i - 1 + 2);
}

