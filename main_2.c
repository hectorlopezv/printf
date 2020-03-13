#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len, len2);
	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Length:[%d, %i]\n", len, len2);
	len = _printf("Character:[%c],character[%c]\n", 'H','L');
	len2 = printf("Character:[%c],character[%c]\n", 'H','L');
	printf("Length:[%d, %i]\n", len, len2);
	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Length:[%d, %i]\n", len, len2);

	return (0);


}