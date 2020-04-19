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

	len = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	putchar('\n');
	len2 = printf("\\x01\\x02\\x03\\x04\\x05\\x06\\x07");
	putchar('\n');
	printf("largo de mi printf %d\n",len);
	printf("largo del original %d\n",len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
