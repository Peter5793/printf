#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>

/*typedef - for user defined data */
/**
 * struct specifier - function that produces output according to a format
 *
 * @spec: print format
 * @function_ptr: function pointer to the specifier
 */

typedef struct specifier
{
  char spec;
  int (*function_ptr)(va_list);
} specifier_t;

int _print(const char *format, ...);
int _putchar(char c);
int print_char(va_list all_parameters);
int print_string(va_list all_parameters);
int print_percent(va_list all_parameters);
int print_integer(va_list all_parameters);
int print_unsign(int n);
int counter(int j);
int _puts(char *str);
int get_struct(char c, va_list all_parameters);
#endif /*HOLBERTON_H*/
