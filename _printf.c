#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _printf - prints string with format specifiers
 * @format: string to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args; /* holds variable args*/
       	int iterator = 0; /* iterator for format string */
	
        va_start(args, format); /* initialize va_list */
 
        if (!format) /* check for NULL string */
        {
		format++;
			if (*format == '%') /*loop through format string */
			{
				format++;/* move to next character*/
				while (*format)
				{
					format++;
				}
		/**if (*format =='%') * check for format specifier *
                {
                	_putchar(%);
			format++; * move to next character *
                }**/
			if (*format == 'c') /* check for character */
                	{
                		int c = va_arg(args, int); /* get character */
                       		_putchar(c); /* print character */
                        	iterator++; /* increment character counter */
                	}
				else if (*format == 's') /* check for string */
                		{
					char *s = va_arg(args, char*); /* get string */
					while (*s) /* loop through string */
                        		{
                        			_putchar(*s); /* print character */
                        		iterator++; /* increment character counter */
					}
				}	
				else
                		{
              				_putchar('%');
					_putchar(*format); /* just print it */
				}
				iterator++; /* increment character counter */
        			}
				format++; /* move to next character */
				}
        va_end(args); /* clean up list */
        return (iterator); /* return count */
}
