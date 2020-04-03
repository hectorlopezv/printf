#include "holberton.h"

/**
 * convert - converter function, a clone of itoa
 * @num: number
 * @base: base
 *
 * Return: string
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
 * convert_2 - converter function, a clone of itoa
 * @num: number
 * @base: base
 * Return: string
 */
char *convert_2(unsigned long int num, unsigned long int base)
{
	static char *array;
	static char buffer[50];
	char *ptr;
	unsigned long   n;

	array = "0123456789abcdef";
	n = num;
	ptr = &buffer[49];
	*ptr = '\0';
	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);
	return (ptr);
}

/*  all credits to narnat*/
/*https://gist.github.com/narnat/95733cd0ad7bfac0d90697292914c407*/

/**
 *create_buffer -create_buffer
 *@size: size
 *Return: return
 */

char *create_buffer(int size)
{
	char *buffer;

	buffer = malloc(size);
	if (buffer == NULL)
	{
		return (NULL);
	}
	return (buffer);
}


