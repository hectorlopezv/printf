#include "holberton.h"
#include <limits.h>


int main(void)

{

	int alen, elen,pelen;
	char c = 'z';
	char *str = NULL;

	/*_printf("Her mom had warned her. She had been warned time and again, but she had refused to believe her. She had done everything right and she knew she would be rewarded for doing so with the promotion. So when the promotion was given to her main rival, it not only stung, it threw her belief system into disarray. It was her first big lesson in life, but not the last.Her mom had warned her. She had been warned time and again, but she had refused to believe her. She had done everything right and she knew she would be rewarded for doing so with the promotion. So when the promotion was given to her main rival, it not only stung, it threw her belief system into disarray. It was her first big lesson in life, but not the last.Her mom had warned her. She had been warned time and again, but she had refused to believe her. She had done everything right and she knew she would be rewarded for doing so with the promotion. So when the promotion was given to her main rival, it not only stung, it threw her belief system into disarray. It was her first big lesson in life, but not the last.Her mom had warned her.it not only stung, it threw her belief system into disarray. It was her first big lesson in life, bl");
	 *     */
	_printf("HECLX\n");
	putchar('\n');
	_printf("ANDRES\n");





	elen = printf("Let's print a simple sentence.\n");
	printf("%d\n",elen);
	pelen = _printf("Let's print a simple sentence.\n");
	printf("%d\n",pelen);

	elen = printf("%c", 'S');
	putchar('\n');
	pelen = _printf("%c", 'S');
	putchar('\n');

	printf("%d\n",elen);
	printf("%d\n",pelen);

	elen = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	pelen = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("%d\n",elen);
	printf("%d\n",pelen);



	elen = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	pelen = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("%d\n",elen);
	printf("%d\n",pelen);


	elen = printf("%s", "This sentence is retrieved from va_args!\n");
	pelen = _printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%d\n",elen);
	printf("%d\n",pelen);

	elen = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	pelen = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("%d\n",elen);
	printf("%d\n",pelen);

	elen = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	pelen = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

	printf("%d\n",elen);
	printf("%d\n",pelen);

	elen = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	pelen = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%d\n",elen);
	printf("%d\n",pelen);


	elen = printf("%%");
	putchar('\n');
	pelen = _printf("%%");
	putchar('\n');
	printf("%d\n",elen);
	printf("%d\n",pelen);

	printf("Should print a single percent sign: %%\n");

	_printf("Should print a single percent sign: %%\n");



	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');

	printf("css%ccs%scscscs", 'T', "Test");
	putchar('\n');
	_printf("css%ccs%scscscs", 'T', "Test");
	putchar('\n');

	elen =_printf(NULL);
	printf("%d\n",elen);

	elen= printf("%c", '\0');

	putchar('\n');

	pelen = _printf("%c", '\0');
	putchar('\n');

	printf("%d\n",elen);
	printf("%d\n",pelen);

	elen = printf("%");
	putchar('\n');

	pelen = _printf("%");
	putchar('\n');

	printf("%d\n",elen);
	printf("%d\n",pelen);


	printf("%!\n");
	_printf("%!\n");

	printf("%K\n");

	_printf("%K\n");



	putchar('\n');



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
	printf("printf(\"%\") : %d\n", printf("222%55\n"));


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
	_printf("Actual     : %i\n", alen);

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

	printf("%b", 1024);
	putchar('\n');
	_printf("%b\n", 1024);

	_printf("%r\n","hector");

	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");

	_printf("%r", "\nThis sentence is retrieved from va_args!");

	putchar('\n');

	elen = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");

	printf("%d\n",elen);


	pelen = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	printf("%d\n",pelen);


	pelen = _printf("%p", (void *)0x7fff5100b608);
	putchar('\n');
	printf("%d\n",pelen);
	pelen = printf("%p\n", NULL);
	printf("%d\n",pelen);
	pelen = _printf("%p\n", NULL);
	printf("%d\n",pelen);
	putchar('\n');
	pelen = _printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	printf("%d\n",pelen);
	pelen = _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	printf("%d\n",pelen);
	pelen = _printf("");
	printf("%d\n",pelen);
	pelen = _printf("Can you print an address?\n%p\nNice!\n", (void *)0);
	pelen = printf("Can you print an address?\n%p\nNice!\n", (void *)0);
	printf("%d\n",pelen);
	pelen = _printf("%pppp", (void *)0x7fff5100b6f8);
	putchar('\n');
	pelen = printf("%pppp", (void *)0x7fff5100b6f8);
	printf("%d\n",pelen);


	_printf("%u\n", 1024);
	_printf("%u\n", -1024);


	_printf("%u\n", UINT_MAX);

	_printf("%u\n", UINT_MAX + 1024);
	_printf("There is %u bytes in %u KB\n", 1024, 1);


	printf("%o - %o = %o\n", 2048, -1024, 1024);
	printf("%o + %o = %o\n", INT_MAX, INT_MAX, INT_MAX * 2);


	_printf("%x\n", 1024);
	_printf("%x\n", -1024);


	_printf("%x\n", UINT_MAX);
	_printf("%x\n", UINT_MAX + 1024);
	_printf("There is %x bytes in %x KB\n", 1024, 1);
	_printf("%x - %x = %x\n", 2048, 1024, 1024);
	_printf("%x + %x = %x\n", INT_MAX, INT_MAX,INT_MAX * 2);


	_printf("%X\n", 1024);

	_printf("%X\n", -1024);

	_printf("%X\n", UINT_MAX);
	_printf("%X\n", UINT_MAX + 1024);

	_printf("There is %X bytes in %X KB\n", 1024, 1);
	_printf("%X - %X = %X\n", 2048, 1024, 1024);
	_printf("%x + %x = %x\n", INT_MAX, INT_MAX, INT_MAX * 2);
	_printf("%X", 1024);
	_printf("%X", -1024);





	_printf("%X\n", UINT_MAX);
	_printf("%X\n", UINT_MAX + 1024);
	_printf("There is %X bytes in %X KB\n", 1024, 1);
	_printf("%X - %X = %X\n", 2048, 1024, 1024);
	_printf("%X + %X = %X\n", INT_MAX, INT_MAX, INT_MAX + 1024);
	_printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	_printf("uuoxxX%xuoXo\n", 1024);


	_printf("%S\n", "Holberton\nSchool");
	_printf("%S\n", "No special character.");
	_printf("%S\n", "\n");

	_printf("%S\n", "\x01\x02\x03\x04\x05\x06\x07");
	_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");






	return (0);

}
