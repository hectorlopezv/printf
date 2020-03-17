#include "holberton.h"

/**
 *print_to_binary - print int to binary
 *@buffer: buffer
 *@list:lista
 *@index_buffer: buffer
 *Return: return
 */

int print_to_binary(char *buffer, va_list list, int index_buffer)
{
	int i;
	char *p;

	p =  convert(va_arg(list, unsigned int), 2);

	for (i = 0; p[i] != '\0'; ++i, index_buffer++)
		buffer[index_buffer]  = p[i];
	return (i - 1);
}


/**
 *print_rot13 - print int to binary
 *@buffer: buffer
 *@list:lista
 *@index_buffer: buffer
 *Return: return
 */

int print_rot13(char *buffer, va_list list, int index_buffer)
{
	int a, b, i;
	char *p;
	char *null_case;

	char test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rest[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	p = va_arg(list, char *);
	
	if (p == NULL)
	{
		null_case = "(null)";
		for (i = 0; null_case[i] != '\0'; ++i, index_buffer++)
		{
			buffer[index_buffer]  = null_case[i];

		}
		return (i - 1);
	}

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; test[b] != '\0'; b++)
		{
			if (p[a] == test[b])
			{
				p[a] = res[b];
				break;
			}
		}
	}

	for (i = 0; p[i] != '\0'; ++i, index_buffer++)
		buffer[index_buffer]  = p[i];

	return (i - 1);
}
