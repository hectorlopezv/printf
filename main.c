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

	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');
	fflush(stdout);
	printf("\n");
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
