#include "holberton.h"

/**
 *_printf - prints output based
 *on format
 *@format: string arguments
 *Return: number of char printed
 *excluding null
 */

int _printf(const char *format, ...)
{
<<<<<<< HEAD
  /**points to an undefined number ofarguments*/
	va_list arg_list;
	int a, b, count = 0;

	va_start(arg_list, format);
	/*declare the base case*/
	if (format == NULL)
		return (-1);
	a = 0;
	while (format[a])
	{
		if (format[a] == '%')
			a++;
		else
		{
			_putchar(formay[a]);
			a++;
			count++;
			continue;
		}
		b = get_struct(format[a], arg_list);
		if (b == -1)
		{
			_putchar('%');
			_putchar(format[a]);
			count += 2;
		}
		else
			count += b;
		a++;

	}
	/* cleans up the list*/
	va_end(arg_list);
	/*Returns the character count here*/
	return (count);
=======
	int b; /**printed char*/
	specifier_t function_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list lst;

	if (format == NULL)
		return (-1);

	va_start(lst, format);
	/**calling the parser function*/

	b = parser(format, function_list, lst);
	va_end(lst);
	return (b);


>>>>>>> 372da638c001b38a127b5b7d95826e1ff02d6e87
}
/**
 *get_struct - gets the struct
 *@c: the char
 *@arg_list: argument list
 *Return: struct
 */

int get_struct(char c, va_list arg_list)
{
	specifier_t structs_ar[] = {
		{'c', print_char},
		{'s', print_string
		}
		{'%', print_percent}
		{'d', print_integer}
		{'i', print_integer}
		{'\0', NULL}
	};
	int b = 0;

	while (structs_ar[b].function_ptr)
	{
		if (c == structs_ar[b].spec)
		{
			return (structs_ar[b].function_ptr(arg_list));
			b++;
		}
		return (-1);
	}
