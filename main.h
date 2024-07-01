#ifndef MAIN_H
#define MAIN_H

#include "_puts.c"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct {
        unsigned char spec;
        unsigned int (*format)(va_list, unsigned char, unsigned int, int, int, int);
}spec;

int (*get_spec(const char *spec))(va_list);

#endif
