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
	char sign = 0, *ptr;
	unsigned  long n = num;

	array = "0123456789abcdef";
	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';
	do {

		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);
	if (sign)
		*--ptr = sign;
	return (ptr);
}


char * two_complement(long int num)
{
	int temp, i, j, index;
	char *string_rev, *string_complement;
	int test_complement;

	string_complement = malloc(256);
	i = 0;
	temp = num, test_complement = num;
	if (temp < 0 )
		temp *= -1;
	while (temp >= 1)
	{
		temp = num /2;

		string_complement[i] =  (test_complement % 2) < 0 ? '1' : '0';

		test_complement = test_complement / 2;

		i++;
	}
	string_complement[i] = 0;

	string_rev = malloc (i+1);
	for (index = i - 1, j = 0; index >= 0 && j<= i -1; --index, j++)
		string_rev[j] = string_complement[index];
	string_rev[j] = 0;
	free(string_complement);
	return (string_rev);
}

int _atoi(char *s)
{
	int n, contador;
	unsigned int str, y, i;

	str = 0;
	y = 0;
	i = 0;
	n = 1;
	contador = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if ((contador > 0) && (s[i] == ' '))
		{ /* break space*/
			str = str;
			break;
		}


		if (s[i] == '-')
		{
			n = n * -1;
		}


		if (s[i] >= '0' && s[i] <= '9')
		{
			contador++;
			y = s[i] - '0';

			str = (str * 10) + y;
		}
	}
	return (str * n);
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

