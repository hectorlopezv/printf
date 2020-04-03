#include "libs.h"



int main(void)

{

	int alen, elen,pelen;
	char c = 'z';
	char *str = NULL;

	/*_printf("Her mom had warned her. She had been warned time and again, but she had refused to believe her. She had done everything right and she knew she would be rewarded for doing so with the promotion. So when the promotion was given to her main rival, it not only stung, it threw her belief system into disarray. It was her first big lesson in life, but not the last.Her mom had warned her. She had been warned time and again, but she had refused to believe her. She had done everything right and she knew she would be rewarded for doing so with the promotion. So when the promotion was given to her main rival, it not only stung, it threw her belief system into disarray. It was her first big lesson in life, but not the last.Her mom had warned her. She had been warned time and again, but she had refused to believe her. She had done everything right and she knew she would be rewarded for doing so with the promotion. So when the promotion was given to her main rival, it not only stung, it threw her belief system into disarray. It was her first big lesson in life, but not the last.Her mom had warned her.it not only stung, it threw her belief system into disarray. It was her first big lesson in life, bl");
	 *     */

   
/*
  _printf("HECLX\n");
  _printf("%d\n",_printf("HECLX\n"));
	_printf("\n");
  _printf("ANDRES\n");
	_printf("%d\n",_printf("ANDRES\n"));

_printf("\n");

  printf("HECLX\n");
  printf("%d\n",printf("HECLX\n"));
	printf("\n");
  printf("ANDRES\n");
	printf("%d\n",printf("ANDRES\n"));
  */





	elen = _printf("Let's print a simple sentence.\n");
  
	
  printf("largo %d\n",_printf("%d\n",elen));

    printf("largo %d\n",printf("%d\n",elen));

  
	pelen = printf("Let's print a simple sentence.\n");
	_printf("%d\n",pelen);


	
  elen = printf("%c", 'S');
	putchar('\n');

  
	pelen = _printf("%c", 'S');
	putchar('\n');
	_printf("%d\n",elen);
  
	
	elen = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	
  pelen = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("%d\n",elen);
	_printf("%d\n",pelen);
	
  elen = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	pelen = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("%d\n",elen);
	_printf("%d\n",pelen);

    elen = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	pelen = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("%d\n",elen);
	printf("%d\n",pelen);

	elen = printf("%s", "This sentence is retrieved from va_args!\n");
	pelen = _printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("%d\n",elen);
	_printf("%d\n",pelen);

	elen = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	pelen = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("%d\n",elen);
	_printf("%d\n",pelen);



  
  
	elen = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	pelen = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%d\n",elen);
	_printf("%d\n",pelen);
	
  
  elen = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	pelen = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	
  _printf("%d\n",elen);
	_printf("%d\n",pelen);


	
  elen = printf("%%");
	putchar('\n');
	pelen = _printf("%%");
	putchar('\n');
	printf("%d\n",elen);
	_printf("%d\n",pelen);
	
  _printf("Should print a single percent sign: %%\n");
	printf("Should print a single percent sign: %%\n");
	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("css%ccs%scscscs", 'T', "Test");
	putchar('\n');
	_printf("css%ccs%scscscs\n", 'T', "Test");
  
  
  
	putchar('\n');
	elen =_printf(NULL);
	_printf("%d\n",elen);

  	putchar('\n');
	elen =printf(NULL);
	printf("%d\n",elen);
  
	elen= _printf("%c", '\0');
	putchar('\n');
	pelen = _printf("%c", '\0');
	putchar('\n');
	
  _printf("%d\n",elen);
	_printf("%d\n",pelen);


	elen= printf("%c", '\0');
	putchar('\n');
	pelen = printf("%c", '\0');
	putchar('\n');
	
  printf("%d\n",elen);
	printf("%d\n",pelen);





	
  elen = printf("%");
	putchar('\n');
	pelen = printf("%");
	putchar('\n');
	printf("%d\n",elen);
	printf("%d\n",pelen);

  elen = _printf("%");
	putchar('\n');
	pelen = _printf("%");
	putchar('\n');
  _printf("%d\n",elen);
	_printf("%d\n",pelen);

  
  

	elen =_printf("%!\n");
    _printf("%d\n",elen);
	elen =_printf("%!\n");
    _printf("%d\n",elen);
	elen = _printf("%K\n");
    _printf("%d\n",elen);
	elen = _printf("%K\n");
    _printf("%d\n",elen);
	putchar('\n');

	elen =printf("%!\n");
    _printf("%d\n",elen);
	elen =printf("%!\n");
    _printf("%d\n",elen);
	elen = printf("%K\n");
    _printf("%d\n",elen);
	elen = printf("%K\n");
    _printf("%d\n",elen);
	putchar('\n');


  
	elen = _printf("Expected: %k\n");
	_printf("%d\n",elen);
	alen = _printf("Expected: %k\n");
	_printf("%d\n",alen);
	alen = _printf("actual: %k\n");
	_printf("%d\n",alen);
	_printf("Expected: %s\n",(char *)0);
	_printf("Actual: %s\n",(char *)0);
	elen = _printf(NULL);
	_printf("tamano null %d\n",elen);
	_printf("Expected: %\n");
_printf("Actual: %\n");





	_printf("START OF TEST\n");
	_printf("=====================\n");
	_printf("_printf(NULL)  : %d\n", _printf(str));
	_printf("__printf(NULL) : %d\n", _printf(str));
	_printf("_printf(\"%\") : %d\n", _printf("%"));
	_printf("__printf(\"%\"): %d\n", _printf("%"));
	_printf("_printf(\"%\") : %d\n", _printf("222%55\n"));
	pelen = _printf("222%55\n");
	_printf("%d\n",pelen);
	str = "hello, world";

  	pelen = printf("222%55\n");
	printf("%d\n",pelen);
	str = "hello, world";
  
	_printf("\n=====================\n");
	_printf("*****CHAR*****\n");
	_printf("=====================\n");
	_printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = _printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	_printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
  
	_printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	_printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	_printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');
	_printf("Expected   : %%%c\n", 'y');
	_printf("Actual     : %%%c\n", 'y');
	_printf("=====================\n");
	_printf("*****STRINGS*****\n");
	_printf("=====================\n");
	alen = elen = 0;

  


  
	_printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	_printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = _printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);

	elen = _printf("%s", "");
	alen = _printf("%s", "");
	_printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	
  
  
  
  
  
  
  
  _printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");
	elen = _printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	alen = _printf("Actual  : %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	_printf("Expected: %d\n", elen);
	_printf("Actual  : %d\n", alen);



  






	_printf("%b", 1024);
	putchar('\n');
	_printf("%b\n", 1024);

  	_printf("%b", 98);
	putchar('\n');
	_printf("%b\n", 98);

  
elen = _printf("%r\n","hector");
_printf("%d\n",elen);
_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");

	putchar('\n');


	_printf("%r", "\nThis sentence is retrieved from va_args!");
	putchar('\n');
printf("R\n");
  
	elen = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	_printf("%d\n",elen);
  
  
  
	pelen = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
  
  
	_printf("%d\n",pelen);
/*
	pelen = _printf("%p", (void *)0x7fff5100b608);
	putchar('\n');
	_printf("%d\n",pelen);
	pelen = _printf("%p\n", NULL);
	_printf("%d\n",pelen);
	pelen = _printf("%p\n", NULL);
	_printf("%d\n",pelen);
	putchar('\n');
	pelen = _printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	_printf("%d\n",pelen);
	pelen = _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	_printf("%d\n",pelen);
	pelen = _printf("");
	_printf("%d\n",pelen);
	pelen = _printf("Can you print an address?\n%p\nNice!\n", (void *)0);
	pelen = _printf("Can you print an address?\n%p\nNice!\n", (void *)0);
	_printf("%d\n",pelen);
	pelen = _printf("%pppp", (void *)0x7fff5100b6f8);
	putchar('\n');
	pelen = _printf("%pppp", (void *)0x7fff5100b6f8);
	_printf("%d\n",pelen);


	_printf("%u\n", 1024);
	_printf("%u\n", -1024);


	_printf("%u\n", UINT_MAX);

	_printf("%u\n", UINT_MAX + 1024);
	_printf("There is %u bytes in %u KB\n", 1024, 1);


	_printf("%o - %o = %o\n", 2048, -1024, 1024);
	_printf("%o + %o = %o\n", INT_MAX, INT_MAX, INT_MAX * 2);


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


*/




	return (0);

}