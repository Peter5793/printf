#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

/* typedef used to name user defined data types */

/**
 * struct specifier - function that produces output according to a format
 *
 * @spec: Format to print
 * @function_ptr: The function pointer to the specifier
 */
typedef struct specifier
{
	char spec;
	int (*function_ptr)(va_list);
} specifier_t;


int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_percent(va_list arg_list);
int print_integer(va_list arg_list);
int print_unsign(int n);
int counter(int j);
int _puts(char *str);
int get_struct(char c, va_list arg_list);
#endif /* HOLBERTON_H */
