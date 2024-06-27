#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * get_spec - selects the correct function to perform the operation
 * @s: operator passed
 *
 * Return: a pointer to the function that corresponds to the operator given
 */


int (*get_spec(const char *spec))(va_list)
{
	spec label[] = {
		{"d", print_dec},
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"%", print_per},
		{NULL, NULL}
	};

	int i = 0;

	while (label[i].spec != NULL)
	{
		if (strcmp(spec, label[i].spec) == 0)
			return (label[i].f);
		i++;
	}

	return (NULL);
}