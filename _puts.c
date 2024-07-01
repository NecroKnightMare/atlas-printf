#include "main.h"

/**
 * _puts - prints string
 * @c: string printed
 *
 * Return: number of bytes printed
 */
 
int _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    return (i);
}