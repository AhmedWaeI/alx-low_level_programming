#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *separator = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int ));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)"
					printf("%s%s", separator, s);
			}
			i++;
			separator = ", ";
			
		}
	}
	va_end(args);
	printf("\n");
}
