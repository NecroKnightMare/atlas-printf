#include "main.h"

/**
 * _printf - prints string with format specifiers
 * @format: string to print
 *
 * Return: number of characters printed
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
        int i = 0;
        int *count = format;
        va_list args, args_copy;
        va_start(args, format);
        va_copy(args_copy, args);
        
        if (count[0] != '%')
        {
                _putchar(stdout, count);
                while (*format == '%')
                {
                        count++;
                        if (*format == 'c')
                        {
                                char c = va_arg(args, int);
                                _putchar("Character: %c", c);
                        }
                        else if (*format == 's')
                        {
                                char *s = va_arg(args, char*);
                                _putchar("String: %s\n", s);
                        }
                        else if (*format == 'd')
                        {
                                int d = va_arg(args, int);
                                _putchar("Decimal Integer: %d", d);
                        }
                        else if (*format == 'i')
                        {
                                int i = va_arg(args, int);
	                	_putchar("Integer: %i", i);
                        }
                        else
                        {
                                _putchar(*format);
                        }
                        format++;
                }
        va_end(args);
        va_end(args_copy);
        }
}

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...) 
{
    va_list args; /* holds variabe args*/
    va_start(args, format); /* initialize va_list */

    const char *iterator = format; /* pointer to format string */
    int count = 0; /* printed character counter */

    while (*iterator!= '\0') /* loop through format string */
    {
        if (*iterator == '%') /* check for format specifier */
        {
            iterator++; /* move to next character */

            if (*iterator == 'c') /* check for character */
            {
                char c = (char)va_arg(args, int); /* get character */
                {
                        _putchar(c); /* print character */
                        count++; /* increment character counter */
                }
            } 
            
            else if (*iterator == 's') /* check for string */
            {
                char *s = va_arg(args, char*); /* get string */
                while (*s) /* loop through string */
                {
                    _putchar(*s++); /* print character */
                    count++; /* increment character counter */
                }
            } 
            
            else if (*iterator == 'd' || *iterator == 'i') /* check for integer */
            {
                int num = va_arg(args, int); /* get integer */
                char str_num[50]; /* string to hold integer */
                int index = 0; /* index of string */

                if (num < 0) /* check for negative number */
                {
                    str_num[index++] = '-'; /* add negative sign */
                    num = -num; /* make number positive */
                }

                while (num > 0) /* loop through number */
                {
                    str_num[index++] = '0' + (num % 10); /* add digit to string */
                    num /= 10; /* move to next digit */
                }

                if (index == 0) /* check for zero */
                {
                    str_num[index++] = '0'; /* add zero to string */
                }

                str_num[index] = '\0'; /* add null terminator */

                for (; *str_num; *str_num++) /* loop through string */
                {
                    _putchar(*str_num); /* print character */
                    count++; /* increment character counter */
                }

            } 
            
            else 
            {
                _putchar('%'); /* print % */
                _putchar(*iterator); /* print character */
                count += 2; /* increment character counter */
            }

        } 
        
        else /* if not format specifier */
        {
            _putchar(*iterator); /* just print it */
            count++; /* increment character counter */
        }

        iterator++; /* move to next character */
    }

    va_end(args); /* clean up list */
    return (count); /* return count */
}
