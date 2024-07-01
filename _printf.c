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
	unsigned char iterator;/**used this by itself and it worked**/
	/**format = iterator;don't know what to do with this, still compiling error- line 32*/
	unsigned int count = 0;/* printed character counter */
	int d, j, dig_index, tmp, k, divide, number;/**declared everything here to avoid comp errors*/


	va_list args;/* holds variable args*/
	va_start(args, format);/* initialize va_list */

	if (!format[i])/* check for null format string -- used the array of th pointer- don't know if using iterator vs this is whats causing no checks through intranet.*/
{
		_putchar("Error\n", format);/**will need to have _puts to print string*/
		return (-1);/* return error */
}

	iterator = (unsigned char *)format;/* cast format string to unsigned char */

	while (format[i] != '\0')/* loop through format string */
{
		iterator++;
		if (format[i] == '%')/* check for format specifier */
{
			iterator++;/* move to next character */

		if (format[i] == 'c')/* check for character */
{
			char c = (char)va_arg(args, int);/* get character */
			_putchar(c);/* print character */
			/* increment character counter */
}
			else if (format[i] == 's')/* check for string */
{
				char *s = va_arg(args, char*); /* get string */
				while (*s != '\0') /* loop through string */
{
					_putchar(*s); /* print character N - This is the string so _puts? -A*/
					count++; /* increment character counter */
}
}
			else if (format[i] == 'd') /* check for integer */
{
				d = va_arg(args, int); /* get integer */
				dig_index = 0; /* index of string -- number of int -A*/
				tmp = d; /* loop counter */
				k = dig_index;

				do
{
					dig_index++;
					tmp /= 10;
}
					while (tmp > 0);

				while (k >= 0) /* looping to count int*/
{
					k--;
					divide = 1;

					while (k < j)
{
						divide *= 10;
						j++;
}
					number = (d / divide) % 10;
					_putchar('0' + number);
}
}
			else 
{
				_putchar('%'); /* print % */
				_putchar(format[i]); /* print character */
				count += 2; /* increment character counter */
}
}
		else /* if not format specifier */
{
		_putchar(format[i]); /* just print it */
		count++; /* increment character counter */
}
	iterator++; /* move to next character */
}
	va_end(args); /* clean up list */
	return (count); /* return count */
}
