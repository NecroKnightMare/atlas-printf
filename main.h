#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_s(char *s);
int print_num(int n);
/**
void _print_d(va_list args);
void _print_p(va_list args);
void _print_c(va_list args);
void _print_s(va_list args);
typedef struct {
        unsigned char ;
        unsigned int (*format)(va_list);
}spec;
**/
int (*get_spec(const char format))(va_list args);

#endif
