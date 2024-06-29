/**
 * print_c - prints a character
 * @args: character to print
 *
 * Return: number of characters printed
 */

int print_c(va_list args)
{
	const char a = va_arg(args, int);

	return (write(1, &a, 1));
}

/**
 * print_s - prints a string
 * @args: string to print
 *
 * Return: n/a
 */

int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
			len++;
		}

	return (len);
	}
