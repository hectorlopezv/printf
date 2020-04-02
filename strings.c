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
	char *null_case;
	char *p = (char *) va_arg(list, char *);

	i = 0;

	null_case = "(null)";

	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
			if (*j < 4)
			{
				(*buffer)[*j]  = null_case[i];
				(*l)++;
			}
			else
			{
				check_buffer(null_case, buffer, i, l, j, j_temp_2, ocurrencias);
			}
		}

		return (i - 1);
	}

	/* no null case*/
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
	int i;
	char *null_case, *p, *hex, *x_word;

	i = 0;
	p = va_arg(list, char *);
	null_case = "(null)";
	x_word = "0";

	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
			if (*j < 4)
			{
				(*buffer)[*j]  = null_case[i];
				(*l)++;
			}
			else
			{
				check_buffer(null_case, buffer, i, l, j, j_temp_2, ocurrencias);
			}
		}

		return (i - 1);
	}

	/* no null case*/
	for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			if ((p[i] > 0 && p[i] < 32) || p[i] >= 127)
			{
				hex = convert_2(p[i], 16);
				write_0x(buffer, list, j, l, j_temp_2, ocurrencias, j_temp);
				if (_strlen(hex) == 0)
				{
					if (hex[0] >= 97 && hex[0] <= 102)
					{
						hex[0] = hex[0] - 32;
					}
					printing_char(buffer, x_word, j, l, j_temp_2, ocurrencias, j_temp);
				}

				else if (_strlen(hex) == 1)
				{
					if (hex[0] >= 97 && hex[0] <= 102)
					{
						hex[0] = hex[0] - 32;
					}
					if (hex[1] >= 97 && hex[1] <= 102)
					{
						hex[1] = hex[1] - 32;
					}
				}

				printing_char(buffer, hex, j, l, j_temp_2, ocurrencias, j_temp);
			}
			else
			{
				(*buffer)[*j] = p[i];
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
			if ((p[i] > 0 && p[i] < 32) || p[i] >= 127)
			{
				hex = convert_2(p[i], 16);
				write_0x(buffer, list, j, l, j_temp_2, ocurrencias, j_temp);
				if (_strlen(hex) == 0)
				{
					if (hex[0] >= 97 && hex[0] <= 102)
					{
						hex[0] = hex[0] - 32;
					}
					printing_char(buffer, x_word, j, l, j_temp_2, ocurrencias, j_temp);
				}

				else if (_strlen(hex) == 1)
				{
					if (hex[0] >= 97 && hex[0] <= 102)
					{
						hex[0] = hex[0] - 32;
					}

					if (hex[1] >= 97 && hex[1] <= 102)
					{
						hex[1] = hex[1] - 32;
					}
				}
				printing_char(buffer, hex, j, l, j_temp_2, ocurrencias, j_temp);
			}
			else
			{
				(*buffer)[*j] = p[i];
				(*l)++;
			}
		}

	}
	return (i - 1);
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
			if (*j < 4)
			{
				(*buffer)[*j] = null_case[i];
				(*l)++;
			}
			else
			{
				check_buffer(null_case, buffer, i, l, j, j_temp_2, ocurrencias);
			}
		}
	}
	length = _strlen(p);
	p1 = create_buffer(length + 1);

	/* fill the string*/
	for (i = 0; p[i] != NULL; i++)
	{
		p1[i]  = p[i];
	}
	for (a = 0; p1[a] != NULL; a++)
	{
		for (b = 0; test[b] != NULL; b++)
		{
			if (p1[a] == test[b])
			{
				p1[a] = res[b];
				break;
			}
		}
	}

	for (i = 0; p1[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = p1[i];
			(*l)++;
		}
		else
		{
			check_buffer(p1, buffer, i, l, j, j_temp_2, ocurrencias);
		}
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
	char *temp_2;

	temp_2 = "(null)";

	char *p = (char *) va_arg(list, char *);

	length = _strlen(p);

	if (p == NULL)
	{
		for (index = 0; temp_2[index] != '\0'; index++, (*j)++)
		{
			if (*j < 4)
			{
				(*buffer)[*j] = temp_2[index];
				(*l)++;
			}
			else
			{
				check_buffer(temp_2, buffer, index, l, j, j_temp_2, ocurrencias);
			}
		}
		return (index - 1);
	}

	/* imprimir de final atras*/

	for (index = length; index >= 0; --index, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j] = p[index];
			(*l)++;
		}
		else
		{
			check_buffer(p, buffer, index, l, j, j_temp_2, ocurrencias);
		}
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
}

