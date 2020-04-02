#include "holberton.h"


/**
 *print_int - print_str
 *@buffer: buffer
 *@formato: list
 *@total_chars: j
 *@list: l
 *Return: return
 */

int print_int(char **buffer, char formato, int *total_chars, va_list list)
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


/**
 *print_to_binary - print_str
 *@buffer: buffer
 *@formato: list
 *@total_chars: j
 *@list: l
 *Return: return
 */

int print_to_binary(char **buffer, char formato, int *total_chars,
		va_list list)
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

/**
 *print_u - print_str
 *@buffer: buffer
 *@formato: list
 *@total_chars: j
 *@list: l
 *Return: return
 */


int print_u(char **buffer, char formato, int *total_chars, va_list list)
{
	int i;
	char *word;

	word = convert(va_arg(list, unsigned  int), 10);
	for (i = 0; word[i] != '\0'; ++i)
	{
		_putchar(buffer, word[i], total_chars);
	}
	return (i);
}

/**
 *print_o - print_str
 *@buffer: buffer
 *@formato: list
 *@total_chars: j
 *@list: l
 *Return: return
 */

int print_o(char **buffer, char formato, int *total_chars, va_list list)
{
	int i;
	char *word;

	word = convert(va_arg(list, long  int), 8);

	for (i = 0; word[i] != '\0'; ++i)
	{
		_putchar(buffer, word[i], total_chars);
	}
	return (i);
}

