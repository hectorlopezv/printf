#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>




typedef struct formats
{
	char c;
	int (*f)(char **,va_list, int  *, int *,int *,int *, int *);
} formats_t;

int _strlen(const char *s)
{
	int counter;
	int i;

	i = 0;
	counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	counter--;
	return (counter);
}
char *convert_2(unsigned long int num, unsigned long int base)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long   n;

	array = "0123456789abcdef";
	n = num;

	ptr = &buffer[49];
	*ptr = '\0';
	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);


	return (ptr);



}

char *convert(long int num, int base)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long   n;

	array = "0123456789abcdef";
	n = num;
	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';
	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);


	if (sign)
		*--ptr = sign;
	return (ptr);
}



char *create_buffer(int size)
{
	char *buffer;

	buffer = malloc(size);
	if (buffer == NULL)
	{
		return (NULL);
	}
	return (buffer);

}

void check_buffer(const char *format , char **buffer, int i, int *l, int *j, int *j_temp_2, int *ocurrencias)
{

	write(1, *buffer, *j);
	free(*buffer);
	*buffer = create_buffer(4);
	*j = 0;
	*l = 0;
	(*buffer)[*j] = format[i];
	(*l)++;


}



int print_percentage_literal(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{


	char p;

	p = '%';


	if (*j < 4)
	{
		(*buffer)[*j]  = p;
		(*l)++;
	}
	else
	{
		write(1, *buffer,*j);

		free(*buffer);
		*buffer = create_buffer(4);
		*j = 0;
		*l = 0;
		(*buffer)[*j] = p;
		(*l)++;
	}


	return (0);
}


int print_int(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *p;

	p =  convert(va_arg(list, int), 10);

	for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = p[i];
			(*l)++;
		}
		else
		{
			check_buffer(p , buffer,  i, l, j, j_temp_2, ocurrencias);
		}

	}

	return (i - 1);

}



int print_str(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *null_case;
	char *p = (char *) va_arg(list, char *);

	i = 0;

	null_case = "(null)";

	/* null case*/

	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
			if (*j < 4)
			{
				(*buffer)[*j]  = null_case[i];
				(*l)++;
			}
			else
			{
				check_buffer(null_case , buffer,  i, l, j, j_temp_2, ocurrencias);
			}
		}

		return (i - 1);
	}

	/* no null case*/
	for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = p[i];
			(*l)++;
		}
		else
		{
			check_buffer(p , buffer,  i, l, j, j_temp_2, ocurrencias);
		}

	}
	return (i - 1);
}

void  write_0x(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	char *word;
	int i;

	i = 0;

	word = "\\x";
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = word[i];
			(*l)++;
		}
		else
		{
			check_buffer(word , buffer,  i, l, j, j_temp_2, ocurrencias);
		}

	}

}




int printing_char(char **buffer,char *word, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *null_case;
	char *p = word;

	i = 0;

	null_case = "(null)";

	/* null case*/

	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
			if (*j < 4)
			{
				(*buffer)[*j]  = null_case[i];
				(*l)++;
			}
			else
			{
				check_buffer(null_case , buffer,  i, l, j, j_temp_2, ocurrencias);
			}
		}

		return (i - 1);
	}

	/* no null case*/
	for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = p[i];
			(*l)++;
		}
		else
		{
			check_buffer(p , buffer,  i, l, j, j_temp_2, ocurrencias);
		}

	}
	return (i - 1);
}



int print_S(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *null_case;
	char *p = va_arg(list, char *);
	char *hex;
	char *x_word = "0";

	i = 0;
	null_case = "(null)";

	if (p == 0 || p == NULL)
	{
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
			if (*j < 4)
			{
				(*buffer)[*j]  = null_case[i];
				(*l)++;
			}
			else
			{
				check_buffer(null_case , buffer,  i, l, j, j_temp_2, ocurrencias);
			}
		}

		return (i - 1);
	}

	/* no null case*/
	for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			if ((p[i] > 0 && p[i] < 32) || p[i] >= 127)
			{
				hex = convert_2(p[i], 16);
				write_0x(buffer,list,j, l,j_temp_2,ocurrencias, j_temp);
				if (_strlen(hex) == 0){
					if (hex[0]>= 97 && hex[0]<=102){
						hex[0] = hex[0] - 32;
					}
					printing_char( buffer,x_word, j,l,j_temp_2,ocurrencias, j_temp);
				}

				else if (_strlen(hex) == 1)
				{
					if (hex[0]>= 97 && hex[0]<=102){
						hex[0] = hex[0] - 32;
					}

					if (hex[1]>= 97 && hex[1]<=102){
						hex[1] = hex[1] - 32;
					}

				}



				printing_char( buffer,hex, j,l,j_temp_2,ocurrencias, j_temp);

			}
			else
			{
				(*buffer)[*j] = p[i];
				(*l)++;
			}
		}
		else
		{
			write(1, *buffer,*j);
			free(*buffer);
			*buffer = create_buffer(4);
			*j = 0;
			*l = 0;
			if ((p[i] > 0 && p[i] < 32) || p[i] >= 127)
			{
				hex = convert_2(p[i], 16);
				write_0x(buffer,list,j, l,j_temp_2,ocurrencias, j_temp);
				if (_strlen(hex) == 0){
					if (hex[0]>= 97 && hex[0]<=102){
						hex[0] = hex[0] - 32;
					}
					printing_char( buffer,x_word, j,l,j_temp_2,ocurrencias, j_temp);
				}

				else if (_strlen(hex) == 1)
				{
					if (hex[0]>= 97 && hex[0]<=102){
						hex[0] = hex[0] - 32;
					}

					if (hex[1]>= 97 && hex[1]<=102){
						hex[1] = hex[1] - 32;
					}

				}



				printing_char( buffer,hex, j,l,j_temp_2,ocurrencias, j_temp);

			}
			else
			{
				(*buffer)[*j] = p[i];
				(*l)++;
			}
		}

	}


	return (i - 1);

}





int print_char(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	char p;

	p = (char) va_arg(list, int);

	(*buffer)[*j] = p;
	(*l)++;

	if (*j < 4)
	{
		(*buffer)[*j]  = p;
		(*l)++;
	}
	else
	{
		write(1, *buffer,*j);

		free(*buffer);
		*buffer = create_buffer(4);
		*j = 0;
		*l = 0;
		(*buffer)[*j] = p;
		(*l)++;
	}

	return (0);
}



int print_pointer_void(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *word;

	char p[3] = {'0','x','\0'};

	word = convert_2(va_arg(list, unsigned long int), 16);

	/* null pointer */
	char * null_case = "(nil)";
	/* null case*/

	if (word[0] == '0')
	{
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
			if (*j < 4)
			{
				(*buffer)[*j]  = null_case[i];
				(*l)++;
			}
			else
			{
				check_buffer(null_case, buffer, i, l, j, j_temp_2, ocurrencias);
			}
		}
		return (i - 1);

	}

	for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = p[i];
			(*l)++;
		}
		else
		{
			check_buffer(p, buffer, i, l, j, j_temp_2, ocurrencias);
		}
	}

	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j] = word[i];
			(*l)++;
		}
		else
		{
			check_buffer(word, buffer, i, l, j, j_temp_2, ocurrencias);
		}

	}
	return (i - 1 + 2);

}

int print_u(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *word;



	word = convert_2(va_arg(list, unsigned  int), 10);



	/* no null case*/
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = word[i];
			(*l)++;
		}
		else
		{
			check_buffer(word , buffer,  i, l, j, j_temp_2, ocurrencias);
		}

	}

	if (word [0] == '0' && _strlen(word) == 0)
	{
		return(1);
	}
	return (i - 1);

}




int print_o(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *word;



	word = convert_2(va_arg(list, unsigned  int), 8);



	/* no null case*/
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = word[i];
			(*l)++;
		}
		else
		{
			check_buffer(word , buffer,  i, l, j, j_temp_2, ocurrencias);
		}

	}

	return (i - 1);

}

int print_x(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *word;

	word = convert(va_arg(list, unsigned  int), 16);


	/* no null case*/
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = word[i];
			(*l)++;
		}
		else
		{
			check_buffer(word , buffer,  i, l, j, j_temp_2, ocurrencias);
		}

	}

	if (_strlen(word) == 0)
	{
		return(1);
	}

	return (i - 1);


}

int print_X(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *word;

	word = convert(va_arg(list, unsigned  int), 16);





	/* no null case*/
	for (i = 0; word[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			if (word[i] > 96 && word[i] <123)
			{
				(*buffer)[*j]  = word[i] - 32;
				(*l)++;

			}
			else
			{
				(*buffer)[*j]  = word[i];
				(*l)++;

			}


		}
		else
		{
			write(1, *buffer,*j);
			free(*buffer);
			*buffer = create_buffer(4);
			*j = 0;
			*l = 0;
			if (word[i] > 96 && word[i] <123)
			{
				(*buffer)[*j]  = word[i] - 32;
				(*l)++;

			}
			else
			{
				(*buffer)[*j]  = word[i];
				(*l)++;

			}


		}




	}

	if (_strlen(word) == 0)
	{
		return(1);

	}

	return (i - 1);



}


int print_to_binary(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int i;
	char *p;

	p =  convert(va_arg(list, int), 10);

	for (i = 0; p[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = p[i];
			(*l)++;
		}
		else
		{
			check_buffer(p , buffer,  i, l, j, j_temp_2, ocurrencias);
		}

	}

	return (i - 1);

}



int print_rot13(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{


	int a, b, i,length;
	char *p,*p1;
	char *null_case;

	char test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char res[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	p = va_arg(list, char *);
	if (p == NULL)
	{
		null_case = "(null)";
		for (i = 0; null_case[i] != '\0'; ++i, (*j)++)
		{
			if (*j < 4)
			{
				(*buffer)[*j]  = null_case[i];
				(*l)++;
			}
			else
			{
				check_buffer(null_case , buffer,  i, l, j, j_temp_2, ocurrencias);
			}
		}
	}


	length = _strlen(p);
	p1 = create_buffer (length + 1);



	/* fill the string*/
	for (i = 0; p[i]!= 0; i++)
	{

		p1[i]  = p[i];
	}

	for (a = 0; p1[a] != 0;a++)
	{
		for (b = 0; test[b] != 0;b++)
		{
			if (p1[a] == test[b])
			{
				p1[a] = res[b];
				break;
			}

		}

	}

	for (i = 0; p1[i] != '\0'; ++i, (*j)++)
	{
		if (*j < 4)
		{
			(*buffer)[*j]  = p1[i];
			(*l)++;
		}
		else
		{
			check_buffer(p1 , buffer,  i, l, j, j_temp_2, ocurrencias);
		}

	}

	free(p1);
	return (i - 1);
}






int rev_string(char **buffer,va_list list, int  *j, int *l,int *j_temp_2,int *ocurrencias, int *j_temp)
{
	int b, c, index;
	int length;

	char *temp_2;
	char temp;

	temp_2 = "(null)";

	char *p = (char *) va_arg(list, char *);

	length = _strlen(p);


	if (p == NULL)
	{
		for (index = 0; temp_2[index] != '\0'; index++, (*j)++)
		{


			if (*j < 4)
			{
				(*buffer)[*j] = temp_2[index];
				(*l)++;
			}
			else
			{
				check_buffer(temp_2 , buffer,  index, l, j, j_temp_2, ocurrencias);
			}

		}
		return (index - 1);
	}


	/* imprimir de final atras*/

	for(index = length; index >=0;--index,(*j)++)
	{

		if (*j < 4)
		{
			(*buffer)[*j] = p[index];
			(*l)++;
		}
		else
		{

			check_buffer(p , buffer,  index, l, j, j_temp_2, ocurrencias);
		}

	}




	return (length + 1);

}





/**
 *  * get_format - function that return the text format
 *   *
 *    * @format: char to check
 *     * Return: return format, return null if error
 *      */

int (*get_format(char format))(char **,va_list, int  *, int *,int *,int *, int *)
{
	int i;

	formats_t formato[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_str},
		{'%', print_percentage_literal},
		{'b', print_to_binary},
		{'R', print_rot13},
		{'r', rev_string},
		{'p', print_pointer_void},

		{'u', print_u},
		{'o', print_o},
		{'x', print_x},
		{'X', print_X},
		{'S', print_S},
		{'\0', NULL}
	};


	i = 0;


	while (i < 15)
	{
		if (format == formato[i].c)
			return (formato[i].f);

		i++;
	}
	return (NULL);
}

int handle_format(int largo_format,va_list arg,const char * format , char **buffer, int i, int *l,  int *j, int *j_temp_2, int *ocurrencias, int *j_temp)
{
	int (*get)(char **,va_list, int  *, int *,int *,int *, int *);

	get = get_format(format[i]);

	if (get == NULL)
	{
		if (format[largo_format] == 10)
		{

			if (*j < 4)
			{
				(*buffer)[*j] = format[i - 1];
				(*l)++;
				(*j)++;

				if (*j < 4)
				{
					(*buffer)[*j] = format[i];
					(*l)++;
				}
				else
				{
					check_buffer(format , buffer,  i, l, j, j_temp_2, ocurrencias);

				}


			}
			else
			{
				write(1, *buffer,*j);
				free(*buffer);
				*buffer = create_buffer(4);
				*j = 0;
				*l = 0;
				(*buffer)[*j] = format[i - 1];
				(*l)++;
				(*buffer)[*j] = format[i];
				(*l)++;

			}

		}
		else if ((i == 1 && format[i] == 0))
		{

			free(*buffer);
			va_end(arg);
			return (-1);

		}
		else if (format[largo_format] != 10)
		{

			write(1, *buffer, (i - *ocurrencias) + (*j_temp_2));
			free(*buffer);
			va_end(arg);
			return (-1);
		}
	}

	if (get != NULL)
	{
		/*case not null*/
		(*j_temp)  += get(buffer,arg, j, l,j_temp_2,ocurrencias, j_temp);
		*j += *j_temp;
		(*ocurrencias)++;
		*j_temp_2 += *j_temp;
		*j_temp = 0;


	}

	return (0);

}



/**
 *  * _printf - function that works like printf
 *   * @format: arguments to check
 *    * Return: 0 on success
 *     */

int _printf(const char *format, ...)
{
	va_list arg;

	char *buffer;


	int i = 0, j = 0, j_temp = 0, j_temp_2 = 0, ocurrencias = 0, largo_format;
	int buffer_full = 0;
	int l = 0;
	int format_fail = 0;

	va_start(arg, format);

	buffer = create_buffer(4);

	if (format == NULL || buffer == NULL)
		return (-1);

	largo_format = _strlen(format);

	while (format[i] && format )
	{

		if (format[i] != '%')
		{

			if (j<4)
			{
				buffer[j] = format[i];
				l++;
			}
			else
			{

				check_buffer(format ,&buffer, i, &l,  &j, &j_temp_2, &ocurrencias);


			}

		}
		else
		{

			i++;

			if (j<4)
			{

				format_fail = handle_format(largo_format, arg,format ,&buffer,i, &l,  &j, &j_temp_2, & ocurrencias,&j_temp);

				if (format_fail == -1)
					return (-1);
			}
			else
			{

				check_buffer(format ,&buffer, i, &l,  &j, &j_temp_2, &ocurrencias);

				format_fail = handle_format(largo_format, arg,format ,&buffer,i, &l,  &j, &j_temp_2, & ocurrencias,&j_temp);
				if (format_fail == -1)
					return (-1);
			}

		}

		i++;
		j++;
	}


	va_end(arg);
	write(1, buffer, l);




	free(buffer);

	return ((i - ocurrencias) + j_temp_2);

}








#include <limits.h>

int main(void)

{

	int alen, elen,pelen;
	char c = 'z';
	char *str = NULL;
	int l2,pepe;
	l2 = 0;

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
	/*
	 *     printf("%d\n",elen);
	 *         printf("%d\n",pelen);
	 *
	 *         	elen = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	 *         		pelen = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	 *         		    printf("%d\n",elen);
	 *         		        printf("%d\n",pelen);
	 *
	 *
	 *         		                	elen = printf("%%");
	 *         		                		putchar('\n');
	 *         		                			pelen = _printf("%%");
	 *         		                				putchar('\n');
	 *         		                					printf("%d\n",elen);
	 *         		                					    printf("%d\n",pelen);
	 *
	 *         		                					    	printf("Should print a single percent sign: %%\n");
	 *
	 *         		                					    		_printf("Should print a single percent sign: %%\n");
	 *
	 *
	 *
	 *         		                					    					printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	 *         		                					    						_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	 *
	 *         		                					    							printf("css%ccs%scscscs", 'T', "Test");
	 *         		                					    								putchar('\n');
	 *         		                					    									_printf("css%ccs%scscscs", 'T', "Test");
	 *         		                					    										putchar('\n');
	 *
	 *         		                					    										    	elen =_printf(NULL);
	 *         		                					    										    		printf("%d\n",elen);
	 *
	 *         		                					    										    			elen= printf("%c", '\0');
	 *
	 *         		                					    										    					putchar('\n');
	 *
	 *         		                					    										    							pelen = _printf("%c", '\0');
	 *         		                					    										    								putchar('\n');
	 *
	 *         		                					    										    								        printf("%d\n",elen);
	 *         		                					    										    								            printf("%d\n",pelen);
	 *
	 *         		                					    										    								            		elen = printf("%");
	 *         		                					    										    								            			putchar('\n');
	 *
	 *         		                					    										    								            				pelen = _printf("%");
	 *         		                					    										    								            					putchar('\n');
	 *
	 *         		                					    										    								            							printf("%d\n",elen);
	 *         		                					    										    								            							    printf("%d\n",pelen);
	 *
	 *
	 *         		                					    										    								            							            	printf("%!\n");
	 *         		                					    										    								            							            		_printf("%!\n");
	 *
	 *         		                					    										    								            							            			printf("%K\n");
	 *
	 *         		                					    										    								            							            				_printf("%K\n");
	 *
	 *
	 *
	 *         		                					    										    								            							            					putchar('\n');
	 *
	 *         		                					    										    								            							            						l2 = _printf("22%22");
	 *         		                					    										    								            							            							putchar('\n');
	 *         		                					    										    								            							            								printf("%d\n",l2);
	 *
	 *
	 *         		                					    										    								            							            									elen = printf("Expected: %k\n");
	*         		                					    										    								            							            										printf("%d\n",elen);
	*
		*         		                					    										    								            							            											alen = printf("Expected: %k\n");
	*         		                					    										    								            							            												printf("%d\n",alen);
	*
		*         		                					    										    								            							            													alen = printf("actual: %k\n");
	*         		                					    										    								            							            														printf("%d\n",alen);
	*
		*
		*         		                					    										    								            							            															printf("Expected: %s\n",(char *)0);
	*         		                					    										    								            							            																_printf("Actual: %s\n",(char *)0);
	*
		*         		                					    										    								            							            																	elen = _printf(NULL);
	*         		                					    										    								            							            																		printf("tamano null %d\n",elen);
	*
		*         		                					    										    								            							            																			printf("Expected: %\n");
	*         		                					    										    								            							            																				_printf("Actual: %\n");
	*
		*
		*
		*
		*
		*
		*
		*         		                					    										    								            							            																				    	printf("START OF TEST\n");
	*         		                					    										    								            							            																				    		printf("=====================\n");
	*         		                					    										    								            							            																				    			printf("printf(NULL)  : %d\n", printf(str));
	*         		                					    										    								            							            																				    				printf("_printf(NULL) : %d\n", _printf(str));
	*         		                					    										    								            							            																				    					printf("printf(\"%\") : %d\n", printf("%"));
	*         		                					    										    								            							            																				    						printf("_printf(\"%\"): %d\n", _printf("%"));
	*         		                					    										    								            							            																				    							printf("printf(\"%\") : %d\n", printf("222%55\n"));
	*
		*
		*         		                					    										    								            							            																				    										pelen = _printf("222%55\n");
	*         		                					    										    								            							            																				    											printf("%d\n",pelen);
	*         		                					    										    								            							            																				    												str = "hello, world";
	*         		                					    										    								            							            																				    													printf("=====================\n");
	*         		                					    										    								            							            																				    														printf("*****CHAR*****\n");
	*         		                					    										    								            							            																				    															printf("=====================\n");
	*         		                					    										    								            							            																				    																printf("Expected   : %c\n", 'a');
	*         		                					    										    								            							            																				    																	_printf("Actual     : %c\n", 'a');
	*         		                					    										    								            							            																				    																		elen = printf("Expected   : %c\n", c);
	*         		                					    										    								            							            																				    																			alen = _printf("Actual     : %c\n", c);
	*
		*
		*         		                					    										    								            							            																				    																						printf("Expected   : %i\n", elen);
	*         		                					    										    								            							            																				    																							_printf("Actual     : %i\n", alen);
	*
		*         		                					    										    								            							            																				    																									printf("Expected   : %cc\n", 'a');
	*         		                					    										    								            							            																				    																										_printf("Actual     : %cc\n", 'a');
	*         		                					    										    								            							            																				    																											printf("Expected   : %c\n", 53);
	*         		                					    										    								            							            																				    																												_printf("Actual     : %c\n", 53);
	*         		                					    										    								            							            																				    																													printf("Expected   : %c.\n", '\0');
	*         		                					    										    								            							            																				    																														_printf("Actual     : %c.\n", '\0');
	*         		                					    										    								            							            																				    																															printf("Expected   : %%%c\n", 'y');
	*         		                					    										    								            							            																				    																																_printf("Actual     : %%%c\n", 'y');
	*         		                					    										    								            							            																				    																																	printf("=====================\n");
	*         		                					    										    								            							            																				    																																		printf("*****STRINGS*****\n");
	*         		                					    										    								            							            																				    																																			printf("=====================\n");
	*         		                					    										    								            							            																				    																																				alen = elen = 0;
	*         		                					    										    								            							            																				    																																					printf("Expected   : %s\n", "holberton");
	*         		                					    										    								            							            																				    																																						_printf("Actual     : %s\n", "holberton");
	*         		                					    										    								            							            																				    																																							printf("Expected   : %s$\n", "");
	*         		                					    										    								            							            																				    																																								_printf("Actual     : %s$\n", "");
	*         		                					    										    								            							            																				    																																									elen = printf("Expected   : %s\n", str);
	*         		                					    										    								            							            																				    																																										alen = _printf("Actual     : %s\n", str);
	*         		                					    										    								            							            																				    																																											elen = printf("%s", "");
	*         		                					    										    								            							            																				    																																												alen = _printf("%s", "");
	*         		                					    										    								            							            																				    																																													printf("Expected   : %i\n", elen);
	*         		                					    										    								            							            																				    																																														printf("Actual     : %i\n", alen);
	*         		                					    										    								            							            																				    																																															printf("Expected   : %sschool\n", "holberton");
	*         		                					    										    								            							            																				    																																																_printf("Actual     : %sschool\n", "holberton");
	*         		                					    										    								            							            																				    																																																	elen = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	*         		                					    										    								            							            																				    																																																		alen = _printf("Actual  : %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	*         		                					    										    								            							            																				    																																																			printf("Expected: %d\n", elen);
	*         		                					    										    								            							            																				    																																																				printf("Actual  : %d\n", alen);
	*
		*         		                					    										    								            							            																				    																																																						printf("%b", 1024);
	*         		                					    										    								            							            																				    																																																							putchar('\n');
	*         		                					    										    								            							            																				    																																																								_printf("%b\n", 1024);
	*
		*         		                					    										    								            							            																				    																																																										_printf("%r\n","hector");
	*
		*         		                					    										    								            							            																				    																																																												_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	*
		*         		                					    										    								            							            																				    																																																														_printf("%r", "\nThis sentence is retrieved from va_args!");
	*
		*         		                					    										    								            							            																				    																																																																putchar('\n');
	*
		*         		                					    										    								            							            																				    																																																																		elen = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	*
		*         		                					    										    								            							            																				    																																																																				printf("%d\n",elen);
	*
		*
		*         		                					    										    								            							            																				    																																																																							pelen = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	*         		                					    										    								            							            																				    																																																																								printf("%d\n",pelen);
	*
		*
		*         		                					    										    								            							            																				    																																																																											pelen = _printf("%p", (void *)0x7fff5100b608);
	*         		                					    										    								            							            																				    																																																																												putchar('\n');
	*         		                					    										    								            							            																				    																																																																													printf("%d\n",pelen);
	*         		                					    										    								            							            																				    																																																																														pelen = printf("%p\n", NULL);
	*         		                					    										    								            							            																				    																																																																															printf("%d\n",pelen);
	*         		                					    										    								            							            																				    																																																																																pelen = _printf("%p\n", NULL);
	*         		                					    										    								            							            																				    																																																																																	printf("%d\n",pelen);
	*         		                					    										    								            							            																				    																																																																																		putchar('\n');
	*         		                					    										    								            							            																				    																																																																																			pelen = _printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	*         		                					    										    								            							            																				    																																																																																				printf("%d\n",pelen);
	*         		                					    										    								            							            																				    																																																																																					pelen = _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	*         		                					    										    								            							            																				    																																																																																						printf("%d\n",pelen);
	*         		                					    										    								            							            																				    																																																																																							pelen = _printf("");
	*         		                					    										    								            							            																				    																																																																																								printf("%d\n",pelen);
	*         		                					    										    								            							            																				    																																																																																									pelen = _printf("Can you print an address?\n%p\nNice!\n", (void *)0);
	*         		                					    										    								            							            																				    																																																																																										pelen = printf("Can you print an address?\n%p\nNice!\n", (void *)0);
	*         		                					    										    								            							            																				    																																																																																											printf("%d\n",pelen);
	*         		                					    										    								            							            																				    																																																																																												pelen = _printf("%pppp", (void *)0x7fff5100b6f8);
	*         		                					    										    								            							            																				    																																																																																													putchar('\n');
	*         		                					    										    								            							            																				    																																																																																														pelen = printf("%pppp", (void *)0x7fff5100b6f8);
	*         		                					    										    								            							            																				    																																																																																															printf("%d\n",pelen);
	*
		*
		*         		                					    										    								            							            																				    																																																																																																		_printf("%u\n", 1024);
	*         		                					    										    								            							            																				    																																																																																																			_printf("%u\n", -1024);
	*
		*
		*         		                					    										    								            							            																				    																																																																																																					_printf("%u\n", UINT_MAX);
	*
		*         		                					    										    								            							            																				    																																																																																																							_printf("%u\n", UINT_MAX + 1024);
	*         		                					    										    								            							            																				    																																																																																																								_printf("There is %u bytes in %u KB\n", 1024, 1);
	*
		*
		*         		                					    										    								            							            																				    																																																																																																											printf("%o - %o = %o\n", 2048, -1024, 1024);
	*         		                					    										    								            							            																				    																																																																																																												printf("%o + %o = %o\n", INT_MAX, INT_MAX, INT_MAX * 2);
	*
		*
		*         		                					    										    								            							            																				    																																																																																																															_printf("%x\n", 1024);
	*         		                					    										    								            							            																				    																																																																																																																_printf("%x\n", -1024);
	*
		*
		*         		                					    										    								            							            																				    																																																																																																																			_printf("%x\n", UINT_MAX);
	*         		                					    										    								            							            																				    																																																																																																																				_printf("%x\n", UINT_MAX + 1024);
	*         		                					    										    								            							            																				    																																																																																																																					_printf("There is %x bytes in %x KB\n", 1024, 1);
	*         		                					    										    								            							            																				    																																																																																																																						_printf("%x - %x = %x\n", 2048, 1024, 1024);
	*         		                					    										    								            							            																				    																																																																																																																							_printf("%x + %x = %x\n", INT_MAX, INT_MAX,INT_MAX * 2);
	*
		*
		*         		                					    										    								            							            																				    																																																																																																																										_printf("%X\n", 1024);
	*
		*         		                					    										    								            							            																				    																																																																																																																												_printf("%X\n", -1024);
	*
		*         		                					    										    								            							            																				    																																																																																																																													    _printf("%X\n", UINT_MAX);
	*         		                					    										    								            							            																				    																																																																																																																													    	_printf("%X\n", UINT_MAX + 1024);
	*
		*         		                					    										    								            							            																				    																																																																																																																													    			_printf("There is %X bytes in %X KB\n", 1024, 1);
	*         		                					    										    								            							            																				    																																																																																																																													    				_printf("%X - %X = %X\n", 2048, 1024, 1024);
	*         		                					    										    								            							            																				    																																																																																																																													    					_printf("%x + %x = %x\n", INT_MAX, INT_MAX, INT_MAX * 2);
	*         		                					    										    								            							            																				    																																																																																																																													    						_printf("%X", 1024);
	*         		                					    										    								            							            																				    																																																																																																																													    							_printf("%X", -1024);
	*
		*
		*
		*
		*
		*         		                					    										    								            							            																				    																																																																																																																													    													_printf("%X\n", UINT_MAX);
	*         		                					    										    								            							            																				    																																																																																																																													    														_printf("%X\n", UINT_MAX + 1024);
	*         		                					    										    								            							            																				    																																																																																																																													    															_printf("There is %X bytes in %X KB\n", 1024, 1);
	*         		                					    										    								            							            																				    																																																																																																																													    																_printf("%X - %X = %X\n", 2048, 1024, 1024);
	*         		                					    										    								            							            																				    																																																																																																																													    																	_printf("%X + %X = %X\n", INT_MAX, INT_MAX, INT_MAX + 1024);
	*         		                					    										    								            							            																				    																																																																																																																													    																		_printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	*         		                					    										    								            							            																				    																																																																																																																													    																			_printf("uuoxxX%xuoXo\n", 1024);
	*
		*
		*         		                					    										    								            							            																				    																																																																																																																													    																						_printf("%S\n", "Holberton\nSchool");
	*         		                					    										    								            							            																				    																																																																																																																													    																							_printf("%S\n", "No special character.");
	*         		                					    										    								            							            																				    																																																																																																																													    																								_printf("%S\n", "\n");
	*
		*         		                					    										    								            							            																				    																																																																																																																													    																										_printf("%S\n", "\x01\x02\x03\x04\x05\x06\x07");
	*         		                					    										    								            							            																				    																																																																																																																													    																											_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	*         		                					    										    								            							            																				    																																																																																																																													    																												_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	*
		*
		*
		*
		*
		*         		                					    										    								            							            																				    																																																																																																																													    																															    */
		return (0);

}
