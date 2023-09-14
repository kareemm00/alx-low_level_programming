#include "variadic_functions.h"

/**
 * format_char - char format
 *
 * @separator: string separator
 * @p: pointer
*/

void format_char(char *separator, va_list p)
{
	printf("%s%c", separator, va_arg(p, int));
}

/**
 * format_int - integer format
 *
 * @separator: string separator
 * @p: pointer
*/

void format_int(char *separator, va_list p)
{
	printf("%s%d", separator, va_arg(p, int));
}

/**
 * format_float - float format
 *
 * @separator: string separator
 * @p: pointer
*/

void format_float(char *separator, va_list p)
{
	printf("%s%f", separator, va_arg(p, double));
}

/**
 * format_string - string format
 *
 * @separator: string separator
 * @p: poinetr
*/

void format_string(char *separator, va_list p)
{
	char *ptr = va_arg(p, char *);

	switch ((int)(!ptr))
		case 1:
			ptr = "(nil)";
	printf("%s%s", separator, ptr);
}

/**
 * print_all - print all
 *
 * @format: string format
*/

void print_all(const char * const format, ...)
{
	int k = 0, j;
	va_list p;
	char *separator = "";

	token_t token[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(p, format);
	while (format && format[k])
	{
		j = 0;
		while (token[j].token)
		{
			if (format[k] == token[j].token[0])
			{
				token[j].f(separator, p);
				separator = ", ";
			}
			j++;
		}
		k++;
	}
	printf("\n");
	va_end(p);

}
