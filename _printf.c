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
        int print; /* printed character counter */
        int d, j, dig_index, tmp, k, divide, number = 0; /* integer variables */

        va_start(args, format); /* initialize va_list */
 
        if (!format) /* check for NULL string */
        {
                _putchar("Error\n");/* print error */
		format++;
	while (*format)
	{
		format++;
		if (*format == '%') /*loop through format string */
		{
			iterator++;/* move to next character */
		}
		if (*format =='%') /* check for format specifier */
                {
                	_putchar('%');
			iterator++; /* move to next character */ 
                }
		if (*format == 'c') /* check for character */
                {
                	int c = (args, int); /* get character */
                        _putchar(c); /* print character */
                        count++; /* increment character counter */
                }
                else if (*format == 's') /* check for string */
                {
                        char *s = (args, int*); /* get string */
                        while (*s) /* loop through string */
                        {
                        	_putchar(*s); /* print character */
                        	count++; /* increment character counter */
			}
               	else if (*format == 'd' || *format == 'i') /* check for integer */
                {
                	int value = va_arg(args, int); /* get integer---need help configuring */
                        tmp = d; /* loop counter */
                        k = dig_index;
                        do
                        {
                        	dig_index++; /* increment index */
                                tmp /= 10; /* divide by 10 */
                        }
                        while (tmp > 0); /* loop to count int */
                 while (k >= 0) /* looping to count int*/
                 {
                 	k--; /* decrement index */
                        divide = 1; /* divide by 1 */
                        while (k < j) /* loop to get digit */
                        {
                        	divide *= 10; /* multiply by 10 */
                                j++; /* increment index */
                        }
                        number = (d / divide) % 10; /* get digit */
                        _putchar('0' + number); /* print digit */
                }
                else
                {
                	_putchar(*format); /* just print it */
                	format++; /* increment character counter */
                }
        	iterator++; /* move to next character */
	}
        va_end(args); /* clean up list */
        return (count); /* return count */
}

