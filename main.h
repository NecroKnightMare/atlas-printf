#ifndef MAIN_H
#define MAIN_H
#define WRITE

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct {
        const char spec;
        int (*format)(va_list);
}spec;

int (*get_spec(const char *spec))(va_list);

#endif
