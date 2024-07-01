#include "main.h"

/**
 * _puts - print string
 * @c: string
 *
 * Return: number of byte
 */
int _puts(char *str)
{
	int count = 0;

	if (str)
	{
		for (count = 0; str[count] != '\0'; count++)
		{
			_putchar(str[count]);
		}	
	}
	return (count);
}