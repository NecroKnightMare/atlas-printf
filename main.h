#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
void _print_i(va_list args);
void _print_d(va_list args);
void _print_p(va_list args);

typedef struct {
        unsigned char spec;
        unsigned int (*format)(va_list);
}spec;

int (*get_spec(const char format))(va_list args);

#endif
