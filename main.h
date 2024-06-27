#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _print_c(va_list arg)
void _print_s(va_list arg)
void _print_per(va_list arg)
void _print_d(va_list arg)
void _print_i(va_list arg)

typedef struct format
{
        (char *format),
        (int *format)
}spec;

#endif
