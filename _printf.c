#include "main.h"

/**
 * _printf - prints string with format specifiers
 * @format: string to print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i;
    int str_count;
    int count = 0;

	va_list args;

	if (*format == '\0')
	{
		return (-1);
	}

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
		
	}
	va_end(args);
	return (count);
}
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
        count++;
}
        va_end(args);
        va_end(args_copy);
}
}
