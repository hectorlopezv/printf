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
	long int l = UINT_MAX;

	l += 1024;
	len = _printf("%o\n", l);
	len2 = printf("%o\n", l);
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
