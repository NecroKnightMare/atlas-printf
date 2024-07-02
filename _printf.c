int _printf(const char *format, ...)
{
        int iterator = 0; /* iterator for format string */
        int print; /* printed character counter */
        int d, j, dig_index, tmp, k, divide, number; /* integer variables */
 
 
        va_list args; /* holds variable args*/
        va_start(args, format); /* initialize va_list */
 
        if (!format) /* check for NULL string */
        {
                _putchar("Error\n");/* print error */
If (*format)
{
format++;
while (*format) /*loop through format string */
{
	If (*format == ‘%’) /* check for format specifier */
                {
                        iterator++; /* move to next character */
 
                        if (*format == 'c') /* check for character */
                        {
                                char c = (args, int); /* get character */
                                _putchar(c); /* print character */
                                count++; /* increment character counter */
                        }
                        else if (*format == 's') /* check for string */
 
                     {
                                char *s = (args, char*); /* get string */
                                while (*s) /* loop through string */
                                {
                                        _putchar(*s); /* print character */
                                        s++; /* move to next character */
                                }
                                count++; /* increment character counter */
                        }
                        else if (*format == 'd' || *format == 'i') /* check for integer */
                        {
                                d = (args, int); /* get integer */
                                dig_index = 0; /* index of string -- number of int -A*/
                                tmp = d; /* loop counter */
                                k = dig_index;
                                j = 0;
 
                                do
                                {
                                        dig_index++; /* increment index */
                                        tmp /= 10; /* divide by 10 */
                                }
                                        while (tmp > 0); /* loop to count int */
 
                                while (k >= 0) /* looping to count int*/
                                {
                                        k--; /* decrement index */
                                        divide = 1; /* divide by 1 */
                        
                                {
                                        k--; /* decrement index */
                                        divide = 1; /* divide by 1 */
 
                                        while (k < j) /* loop to get digit */
                                        {
                                                divide *= 10; /* multiply by 10 */
                                                j++; /* increment index */
                                        }
                                        number = (d / divide) % 10; /* get digit */
                                        _putchar('0' + number); /* print digit */
                                }
                        }
                        else
                        {
                                _putchar('\%\%'); /* print % - shouldn't it be %% - Ariel*/
                                _putchar(*format); /* print character */
                                count += 2; /* increment character counter */
                        }
                }
                else /* if not format specifier */
                {
                        _putchar(*format); /* just print it */
                        format++; /* increment character counter */
                }
        iterator++; /* move to next character */
}
        va_end(args); /* clean up list */
        return (count); /* return count */
}

