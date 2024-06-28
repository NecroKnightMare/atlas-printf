#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int _printf(const char *format, ...);
int _putchar(char c);
void _print_c(va_list arg)
void _print_s(va_list arg)
void _print_per(va_list arg)
void _print_d(va_list arg)
void _print_i(va_list arg)

typedef struct format
{
        (char *spec),
        (int (*spec)va_list)
}spec;

int (*get_spec(const char *spec))(va_list);

#endif
