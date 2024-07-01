#include "main.h"

/**
 * _puts - print string
 * @c: string
 *
 * Return: number of byte
 */
 
int _puts(char *str)
{
	int count = 0; /* count the number of bytes */

	if (str) /* check if str is not NULL */
	{
		for (count = 0; str[count] != '\0'; count++) /* loop through the string */
		{
			_putchar(str[count]); /* print each character */
		}	
	}
	return (count); /* return the number of bytes */
}