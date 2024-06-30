#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
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
        va_start(args, format); /* initialize va_list */
        const char *iterator = format; /* pointer to format string */
        int count = 0; /* printed character counter */

        if (!format) /* check for null format string */
        {
                return (-1); /* return error */
        }

        *iterator = format; /* set iterator to format string */

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
                                int k; /* loop counter */

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

                                for (k = 0; str_num[k]; k++) /* loop through string */
                                {
                                        _putchar(str_num[k]); /* print character */
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
