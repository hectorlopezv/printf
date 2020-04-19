#include "holberton.h"


/**
 *rev_string - print_str
 *@buffer: buffer
 *@total_chars: j
 *@list: l
 *Return: return
 */

int rev_string(char **buffer, int *total_chars, va_list list)
{
	int index, length;
	char *temp_2, *p;

	temp_2 = "(null)";
	p = (char *) va_arg(list, char *);

	length = _strlen(p) - 1;

	if (p == NULL)
	{
		for (index = 0; temp_2[index] != '\0'; index++)
		{
			_putchar(buffer, temp_2[index], total_chars);
		}
		return (index);
	}
	for (index = length; index >= 0; --index)
	{
		_putchar(buffer, p[index], total_chars);
	}
	return (length + 1);
}

/**
 *print_pointer_void - print_str
 *@buffer: buffer
 *@total_chars: j
 *@list: l
 *Return: return
 */

int print_pointer_void(char **buffer, int *total_chars,
		va_list list)
{

	int i, j;
	char *word, *null_case;
	char p[3];
	char *fffff_case = "ffffffffffffffff";

	p[0] = '0', p[1] = 'x', p[2] = '\0';

	word = convert(va_arg(list, long int), 16);
	null_case = "(nil)";

	if (word[0] == '0')
	{
		for (i = 0; null_case[i] != '\0'; ++i)
		{
			_putchar(buffer, null_case[i], total_chars);
		}
		return (i);
	}
	for (j = 0; p[j] != '\0'; ++j)
		_putchar(buffer, p[j], total_chars);
	if (word[0] == '-' )
	{
		for (i = 0; fffff_case[i] != '\0'; ++i)
		{
			_putchar(buffer, fffff_case[i], total_chars);
		}
	}
	else
	{

		for (i = 0; word[i] != '\0'; ++i)
		{
			_putchar(buffer, word[i], total_chars);
		}
	}

	return (i + j);
}

/**
 *print_str - print_str
 *@buffer: buffer
 *@total_chars: j
 *@list: l
 *Return: return
 */

int print_str(char **buffer, int *total_chars, va_list list)
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
	for (i = 0; p[i]; i++)
	{
		_putchar(buffer, p[i], total_chars);
	}
	return (i);
}

