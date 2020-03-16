#include "holberton.h"
#include <stdio.h>
#include <limits.h>
int main(void)
{
	int len;
	int len2;
	int len_1,len_2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len, len2);
	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Length:[%d, %i]\n", len, len2);
	len = _printf("Character:[%c],character[%c]\n", 'H','L');
	len2 = printf("Character:[%c],character[%c]\n", 'H','L');
	printf("Length:[%d, %i]\n", len, len2);
	len_1 = _printf("String:[%s],String:[%s]\n", "I am a string !","hector");
	len_2 = printf("String:[%s],String:[%s]\n", "I am a string !","hector");
	printf("Length:[%d, %i]\n", len_1, len_2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Largo %d\n",len);
	printf("Largo %d\n",len2);

	_printf("%%A\n");
	len = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	len2 = _printf("Actual  : %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);

	printf("Largo %d\n",len);
	printf("Largo %d\n",len2);


	return (0);


}