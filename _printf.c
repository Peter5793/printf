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


}
