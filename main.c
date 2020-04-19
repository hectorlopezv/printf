#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/19/20 01:35:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */



int main(void)
{
	int len, len2;
	void *p = (void *)-1;

	len = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	len2 = printf("Could you print some non-prntable characters?\nSure:\\x1F\\x7F\\x0A\nThanks!\n");
	printf("largo de mi printf %d\n",len);
	printf("largo del  original %d\n",len2);
	if (len != len2)
	{
		printf("Lengths differ.\n");
	}
	len = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	putchar('\n');
	len2 = printf("\\x01\\x02\\x03\\x04\\x05\\x06\\x07");
	putchar('\n');
	printf("largo de mi printf %d\n",len);
	printf("largo del  original %d\n",len2);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		return (1);
	}


	len = _printf("Can you print an address?\n%p\nNice!\n", p);

	len2 = printf("Can you print an address?\n%p\nNice!\n", p);
	printf("largo de mi printf %d\n",len);

	printf("largo del  original %d\n",len2);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		return (1);
	}

	return (0);
}
