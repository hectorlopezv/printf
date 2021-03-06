#include "holberton.h"

/**
 *print_char - print_str
 *@buffer: buffer
 *@total_chars: j
 *@list: l
 *Return: return
 */

int print_char(char **buffer, int *total_chars, va_list list)
{
	char p;

	p = (char) va_arg(list, int);

	_putchar(buffer, p, total_chars);
	return (1);

}


/**
 *print_S - print_str
 *@buffer: buffer
 *@total_chars: j
 *@list: l
 *Return: return
 */


int print_S(char **buffer, int *total_chars, va_list list)
{
	int i, counter = 0;
	char *null_case, *p, *hex;
	i = 0, p = va_arg(list, char *), null_case = "(null)";
	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i)
		{
			_putchar(buffer, null_case[i], total_chars); }
		return (i);
	}
	for (i = 0; p[i] != '\0'; ++i)
	{
		if ((p[i] > 0 && p[i] < 32) || p[i] >= 127)
		{	hex = convert(p[i], 16);
			counter += _putchar(buffer, '\\', total_chars);
			counter += _putchar(buffer, 'x', total_chars);
			if (_strlen(hex) - 1  == 0)
			{/*1 digit*/
				counter += _putchar(buffer, '0', total_chars);
				if (hex[0] >= 97 && hex[0] <= 102)
				{	hex[0] = hex[0] - 32; }
				counter += _putchar(buffer, hex[0], total_chars); }
			else if (_strlen(hex) - 1 == 1)
			{/*2 digit*/

				if (hex[0] >= 97 && hex[0] <= 102)
				{
					hex[0] = hex[0] - 32; }
				if (hex[1] >= 97 && hex[1] <= 102)
				{
					hex[1] = hex[1] - 32; }
				counter += _putchar(buffer, hex[0], total_chars);
				counter += _putchar(buffer, hex[1], total_chars);
			}
		}
		else
		{ counter += _putchar(buffer, p[i], total_chars); }
	}
	return (counter);
}

/**
 *print_percentage_literal - print_str
 *@buffer: buffer
 *@total_chars: j
 *@list: l
 *Return: return
 */

int print_percentage_literal(char **buffer, int *total_chars,
		va_list __attribute__((__unused__))list)
{
	char p;

	p = '%';
	_putchar(buffer, p, total_chars);
	return (1);
}

/**
 *print_rot13 - print_str
 *@buffer: buffer
 *@total_chars: j
 *@list: l
 *Return: return
 */


int print_rot13(char **buffer, int *total_chars, va_list list)
{
	int a, b, i, j;
	char *p;
	char *null_case;
	char string[100];
	char test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char res[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0, b = 0, i = 0, j = 0;
	p = va_arg(list, char *);
	if (p == NULL)
	{
		null_case = "(null)";
		for (i = 0; null_case[i] != '\0'; ++i)
		{
			_putchar(buffer, null_case[i], total_chars); }
		return (i); }
	for (i = 0; p[i] != '\0'; i++)
	{
		string[i]  = p[i];
	}
	string[i]  = '\0';

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; test[b] != '\0'; b++)
		{
			if (string[a] == test[b])
			{
				string[a] = res[b];
				break;
			} } }
	for (j = 0; string[j] != '\0'; j++)
	{
		_putchar(buffer, string[j], total_chars); }
	return (j);
}

