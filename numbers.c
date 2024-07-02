#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_s - print string
 * str: string
 * Return: number of characters printed
**/
int print_s(char *str)
{
        int count = 0;

	if (str == NULL);
	{
		str ="(null)";
	}
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
/**
 * print_num - print length
 * n: variable
 *Return: number of characters
**/
int print_num(int n)
{
	int count;
	unsigned int num;
	char *str;
	int length = 0;
	int i = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	unsigned int tmp = num;
	while (tmp != 0)
	{
		length++;
		tmp /= 10;
	}

	str = malloc(length + 1);
	if (str == NULL)
		return (-1);

	str[length] = '\0';
	for (i = length - 1; i >= 0; i--)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
	}
	count += print_s(str);
	free(str);

	return (count);
}
