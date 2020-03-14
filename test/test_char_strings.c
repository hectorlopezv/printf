#include "holberton.h"
#include <limits.h>

int main(void)

{

	int alen, elen,pelen;
	char c = 'z';
	char *str = NULL;
	int l2,pepe;
	l2 = 0;







	printf("Let's print a simple sentence.\n");
	_printf("Let's print a simple sentence.\n");

	printf("%c", 'S');
	putchar('\n');
	_printf("%c", 'S');
	putchar('\n');
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');


	printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);

	printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("%s", "This sentence is retrieved from va_args!\n");

	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");

	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

	printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');

	printf("%%");
	putchar('\n');
	_printf("%%");
	putchar('\n');

	printf("Should print a single percent sign: %%\n");

	_printf("Should print a single percent sign: %%\n");

	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');

	printf("css%ccs%scscscs", 'T', "Test");
	putchar('\n');
	_printf("css%ccs%scscscs", 'T', "Test");
	putchar('\n');

	pepe =_printf(NULL);
	printf("%d\n",pepe);

	printf("%c", '\0');
	putchar('\n');

	_printf("%c", '\0');
	putchar('\n');

	printf("%");
	putchar('\n');

	_printf("%");
	putchar('\n');

	printf("%!\n");
	_printf("%!\n");

	printf("%K\n");

	_printf("%K\n");



	putchar('\n');

	l2 = _printf("22%22");
	printf("%d\n",l2);


	elen = printf("Expected: %k\n");
	printf("%d\n",elen);

	alen = printf("Expected: %k\n");
	printf("%d\n",alen);

	alen = printf("actual: %k\n");
	printf("%d\n",alen);


	printf("Expected: %s\n",(char *)0);
	_printf("Actual: %s\n",(char *)0);

	elen = _printf(NULL);
	printf("tamano null %d\n",elen);

	printf("Expected: %\n");
	_printf("Actual: %\n");







	printf("START OF TEST\n");
	printf("=====================\n");
	printf("printf(NULL)  : %d\n", printf(str));
	printf("_printf(NULL) : %d\n", _printf(str));
	printf("printf(\"%\") : %d\n", printf("%"));
	printf("_printf(\"%\"): %d\n", _printf("%"));
	printf("printf(\"%\") : %d\n", printf("222%55"));
	pelen = _printf("222%55\n");
	printf("%d\n",pelen);
	str = "hello, world";
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');
	printf("Expected   : %%%c\n", 'y');
	_printf("Actual     : %%%c\n", 'y');
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
	elen = printf("%s", "");
	alen = _printf("%s", "");
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");
	elen = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	alen = _printf("Actual  : %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	printf("Expected: %d\n", elen);
	printf("Actual  : %d\n", alen);



	return (0);
}
