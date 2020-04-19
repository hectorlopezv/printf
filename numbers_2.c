#include "holberton.h"


/**
 *print_x - print_str
 *@buffer: buffer
 *@total_chars: j
 *@list: l
 *Return: return
 */

int print_x(char **buffer, int *total_chars, va_list list)
{
	int i;
	char *word;

	word = convert(va_arg(list, unsigned int), 16);

	for (i = 0; word[i] != '\0'; ++i)
	{
		_putchar(buffer, word[i], total_chars);
	}

	return (i);

}



/**
 *print_X - print_str
 *@buffer: buffer
 *@total_chars: j
 *@list: l
 *Return: return
 */

int print_X(char **buffer, int *total_chars, va_list list)
{
	int i;
	char *word;

	word = convert(va_arg(list, unsigned  int), 16);

	for (i = 0; word[i] != '\0'; ++i)
	{

		if (word[i] > 96 && word[i] < 123)
		{
			_putchar(buffer, word[i] - 32, total_chars);
		}
		else
		{
			_putchar(buffer, word[i], total_chars);
		}
	}

	return (i);
}

