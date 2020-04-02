#include "holberton.h"

/**
 *print_int - print_int
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_int(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;
	char *p;

	p =  convert(va_arg(list, int), 10);

	for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = p[i];
			(*l)++;
		}
		else
		{
			check_buffer(p, buffer, i, l, j, j_temp_2, ocurrencias);
		}

	}
	return (i - 1);
}

/**
 *print_u - print_int
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_u(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;
	char *word;

	word = convert_2(va_arg(list, unsigned  int), 10);
	/* no null case*/
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = word[i];
			(*l)++;
		}
		else
		{
			check_buffer(word, buffer, i, l, j, j_temp_2, ocurrencias);
		}

	}
	if (word[0] == '0' && _strlen(word) == 0)
	{
		return (1);
	}
	return (i - 1);

}



/**
 *print_o - print_int
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_o(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;
	char *word;

	word = convert_2(va_arg(list, unsigned  int), 8);
	/* no null case*/
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = word[i];
			(*l)++;
		}
		else
		{
			check_buffer(word, buffer, i, l, j, j_temp_2, ocurrencias);
		}
	}
	return (i - 1);
}



/**
 *print_x - print_int
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_x(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;
	char *word;

	word = convert(va_arg(list, unsigned  int), 16);
	/* no null case*/
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = word[i];
			(*l)++;
		}
		else
		{
			check_buffer(word, buffer, i, l, j, j_temp_2, ocurrencias);
		}
	}
	if (_strlen(word) == 0)
	{
		return (1);
	}
	return (i - 1);
}



/**
 *print_X - print_int
 *@buffer: buffer
 *@list: list
 *@j: j
 *@l: l
 *@j_temp_2: j_temp_2
 *@ocurrencias: ocurrencias
 *@j_temp: j_temp
 *Return: return
 */

int print_X(char **buffer, va_list list, int *j, int *l, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int i;
	char *word;

	word = convert(va_arg(list, unsigned  int), 16);
	/* no null case*/
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			if (word[i] > 96 && word[i] < 123)
			{
				(*buffer)[*j]  = word[i] - 32;
				(*l)++;
			}
			else
			{
				(*buffer)[*j]  = word[i];
				(*l)++;
			}

		}
		else
		{
			write(1, *buffer, *j);
			free(*buffer);
			*buffer = create_buffer(4);
			*j = 0;
			*l = 0;
			if (word[i] > 96 && word[i] < 123)
			{
				(*buffer)[*j]  = word[i] - 32;
				(*l)++;
			}
			else
			{
				(*buffer)[*j]  = word[i];
				(*l)++;
			}
		}

	}

	if (_strlen(word) == 0)
	{
		return (1);
	}
	return (i - 1);

}

