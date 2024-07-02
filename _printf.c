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
	char *str;
	int num;
 
        if (format == NULL) /* check for NULL string */
		return (-1);
	
	va_start(args, format);/* initialize va_list */

		while (*format)
		{
			format++;
			if (*format == '%') /*loop through format string */
			{
				format++;/* move to next character*/
			if (*format =='\0') /* check for null byte and handle end of string */
                	{
                		va_end(args);
				return (-1);
			}
			if (*format == 'c') /* check for character */
                	{
                		_putchar(va_arg(args, int)); /**grab c from args and print */
                        	iterator++; /* increment character counter */
                	}
				else if (*format == 's') /* check for string */
                		{
					str = va_arg(args, char *);/* get string */
					iterator += print_s(str);/* count through string */
                        	}
                       		else if (*format == '%')
				{	
              				_putchar('%');
					iterator++;
				}
			else if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);
				iterator += print_num(num);
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				iterator += 2;
			}
			}
			else
			{	
				_putchar(*format); /**print string**/
				iterator++; /* increment character counter */
        			}
			format++; /* move to next character */
			}
        va_end(args); /* clean up list */
        return (iterator); /* return count */
}
