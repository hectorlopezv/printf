#include "libs.h"
#include <string.h>




int _printf(char * format, ...)
{
  int i, total_chars, p, p2,temp;
  char *buffer;
  

  va_list arg;
  va_start(arg, format);

  i = 0 , total_chars = 0 , p = 0, p2 = 0;
  temp =0;

  if (format == NULL)
    return (-1);

  buffer = malloc(4);
  if ( buffer == NULL)
    return (-1);

  while (format[i] != '\0')
  {
    if (format[i] != '%')
    {
      p += _putchar(&buffer,format[i],&total_chars);
    }
    else 
    {
      i++;
      temp = handle_format(&buffer,format[i],&total_chars,arg);
      if (temp == -1)
      {
        if(format[strlen(format)-1] == 10)
        {
          p2+= _putchar(&buffer, format[i-1], &total_chars);
          p2 += _putchar(&buffer, format[i], &total_chars);
        }
        else
        {
           p2 = 0,p = -1;
           break; 
        }
      }
      else
      {
      p2 += temp;
      }
      
      /*handle format*/

    }

    
    i++;
    

  }
 
  //if (total_chars)
  write (1, buffer, total_chars + 1);
  free(buffer);
  va_end(arg);
   //printf("p %d\n",p);
  //printf("p2 %d\n",p2);
  return ( p + p2);


  }








