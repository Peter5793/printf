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
  char *spec;
  int (*function_ptr)(va_list);
} specifier_t;
int parser(const char *format, specifier_t function_list[], va_list lst);
int _printf(const char *format, ...);
int _putchar(char c);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);



int print_unsign(int n);
int counter(int j);
int _puts(char *str);
int get_struct(char c, va_list all_parameters);
#endif /*HOLBERTON_H*/
