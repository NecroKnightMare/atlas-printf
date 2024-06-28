/**
 * printchar - prints a character
 * @arg: character to print
 *
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	const char a = va_arg(args, int);

	return (write(1, &a, 1));

}