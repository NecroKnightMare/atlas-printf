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
    va_list args;
    va_start(args, format);

    const char *iterator = format;
    int count = 0;

    while (*iterator!= '\0') 
    {
        if (*iterator == '%') 
        {
            iterator++;

            if (*iterator == 'c') 
            {
                char c = (char)va_arg(args, int);
                {
                        _putchar(c);
                        count++;
                }
            } 
            
            else if (*iterator == 's') 
            {
                char *s = va_arg(args, char*);
                while (*s) 
                {
                    _putchar(*s++);
                    count++;
                }
            } 
            
            else if (*iterator == 'd' || *iterator == 'i') 
            {
                int num = va_arg(args, int);
                char str_num[50];
                int index = 0;

                if (num < 0) 
                {
                    str_num[index++] = '-';
                    num = -num;
                }

                while (num > 0) 
                {
                    str_num[index++] = '0' + (num % 10);
                    num /= 10;
                }

                if (index == 0) 
                {
                    str_num[index++] = '0';
                }

                str_num[index] = '\0';

                for (; *str_num; *str_num++) 
                {
                    _putchar(*str_num);
                    count++;
                }

            } 
            
            else 
            {
                _putchar('%');
                _putchar(*iterator);
                count += 2;
            }

        } 
        
        else 
        {
            _putchar(*iterator);
            count++;
        }

        iterator++;
    }

    va_end(args);
    return (count);
}
