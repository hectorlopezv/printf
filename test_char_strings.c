#include "holberton.h"
#include <limits.h>

int main(void)

{

	int alen, elen,pelen;
	char c = 'z';
	char *str = NULL;
	int l2;
	l2 = 0;

	l2 = printf("%\n");
	printf("%d\n",l2);


	elen = printf("Expected: %k\n");
	printf("%d\n",elen);

	alen = printf("Expected: %k\n");
	printf("%d\n",alen);

	alen = printf("actual: %k\n");
	printf("%d\n",alen);


	printf("Expected: %s\n",(char *)0);
	_printf("Actual: %s\n",(char *)0);

	alen = printf(NULL);
	elen = _printf(NULL);
	printf("tamano null %d\n",alen);
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
	pelen = printf("222%55\n");
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
	alen = printf("When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\
			Other options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\
			Most of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\
			The gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\
			You can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\
			Many options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\
			When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\
			Other options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\
			Most of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\
			The gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\
			You can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\
			Many options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.");

	printf("%d\n",alen);
	alen = _printf("When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\
			Other options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\
			Most of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\
			The gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\
			You can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\
			Many options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\
			When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\
			Other options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\
			Most of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\
			The gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\
			You can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\
			Many options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.");


	printf("%d\n",alen);

	return (0);
}
