#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int unsigned_int(va_list args);
void _print_d(va_list args);
void _print_p(va_list args);
void _print_c(va_list args);
void _print_s(va_list args);

typedef struct {
        unsigned char ;
        unsigned int (*format)(va_list);
}spec;

int (*get_spec(const char format))(va_list args);

#endif
