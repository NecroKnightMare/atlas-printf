#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int _printf(const char *format, ...);
int _putchar(char c);
int print_s(va_list args);
int print_c(va_list args);

typedef struct format
{
        (char *spec),
        (int (*spec)va_list)
}spec;

int (*get_spec(const char *spec))(va_list);

#endif
