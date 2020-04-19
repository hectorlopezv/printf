#include "holberton.h"

/**
 *convert - print_str
 *@num: buffer
 *@base: base
 *Return: return
 */

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


/**
 *_putchar - print_str
 *@buffer: buffer
 *@formato: list
 *@total_chars: j
 *Return: return
 */

int _putchar(char **buffer, char formato, int *total_chars)
{
	(*total_chars)++;
	if (*total_chars < 1024)
	{
		(*buffer)[*total_chars] = formato;
	}
	else
	{
		write(1, *buffer, *total_chars);
		free(*buffer), *buffer = NULL;
		*buffer = malloc(1024);
		*total_chars = 0;
		(*buffer)[*total_chars] = formato;
	}
	return (1);
}


/**
 *handle_format - print_str
 *@buffer: buffer
 *@formato: list
 *@total_chars: j
 *@list: l
 *Return: return
 */

int handle_format(char **buffer, char formato, int *total_chars, va_list list)
{
	int i;
	int (*get)(char **, int *, va_list list);

	i = 0;

	get = get_format(formato);
	if (get == NULL)
	{
		return (-1);
	}
	else
	{
		i += get(buffer, total_chars, list);
	}
	return (i);
}

/**
 *_strlen - print_str
 *@s: buffer
 *Return: return
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

	return (counter);
}

