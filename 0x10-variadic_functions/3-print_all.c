#include "variadic_functions.h"


/**
* print_char - prints a character
* @ap: argument pointer
* Return: void
*/

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
* print_int - prints an integer
* @ap: argument pointer
* Return: void
*/

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
* print_float - prints a float
* @ap: argument pointer
* Return: void
*/

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
* print_string - prints a string
* @ap: argument pointer
* Return: void
*/

void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(str == NULL))
		case 1:
			printf("(nil)");
	printf("%s", str);
}

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* Return: void
*/


void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;

	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (funcs[j].type)
		{
			if (format[i] == *(funcs[j].type))
			{
				funcs[j].f(ap);
				if (format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
