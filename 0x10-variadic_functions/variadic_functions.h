#ifndef VARIDIC_FUNCTIONS_H
#define VARIDIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - Struct print
 *
 * @type: The type of argument
 * @f: The function associated
 */

typedef struct print
{
char *type;
void (*f)(va_list);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIDIC_FUNCTIONS_H */
