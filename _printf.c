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
	unsigned char iterator = 0; /* iterator for format string */
	unsigned int count = 0; /* printed character counter */
	int d, j, dig_index, tmp, k, divide, number; /* integer variables */


	va_list args; /* holds variable args*/
	va_start(args, format); /* initialize va_list */

	if (!format) /* check for NULL string */
	{
		_puts("Error\n");/* print error */
	}
	return (-1); /* return error */


	while (format[iterator]) /* loop through format string */
	{
		if (format[iterator] == '%') /* check for format specifier */
		{
			iterator++; /* move to next character */

		if (format[iterator] == 'c') /* check for character */
		{
			char c = (char)va_arg(args, int); /* get character */
			_putchar(c); /* print character */
			count++; /* increment character counter */
		}
			else if (format[iterator] == 's')/* check for string */
			{
				char *s = va_arg(args, char*); /* get string */
				while (*s != '\0') /* loop through string */
				{
					_puts(s); /* print character N - This is the string so _puts? -A*/
					s++; /* move to next character */
					count++; /* increment character counter */
				}
			}
			else if (format[iterator] == 'd' || format[iterator] == 'i') /* check for integer */
			{
				d = va_arg(args, int); /* get integer */
				dig_index = 0; /* index of string -- number of int -A*/
				tmp = d; /* loop counter */
				k = dig_index;
				j = 0;

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
			}
			else
			{
				_putchar('%'); /* print % */
				_putchar(format[iterator]); /* print character */
				count += 2; /* increment character counter */
			}
		}
		else /* if not format specifier */
		{
			_putchar(format[iterator]); /* just print it */
			count++; /* increment character counter */
		}
	iterator++; /* move to next character */
}
	va_end(args); /* clean up list */
	return (count); /* return count */
}
