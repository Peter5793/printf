#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_char - print the character
 * @arg_list: argument list
 * Return: interger
 */
int print_char(va_list arg_list)
{
	_putchar(va_arg(arg_list, int));
	return (1);
}
/**
 * print_string - print string
 *
 * @arg_list: arguments
 * Return: interger
 */

int print_string(va_list arg_list)
{
	char *s;
	int i = 0;

	s = va_arg(arg_list, char*);
	if (!s)
		i = i + _puts("(null)");
	else
		i = i + puts(s);
	return (i);

}
/**
 * print_percent - prints percentage sign
 *
 * @arg_list: arguments in function
 * Return: int
 */
int print_percent(va_list arg_list)
{
	char c = '%';
	(void) arg_list;
	/* writing the character to stdout */
	_putchar (c);
	return (1);
}
/**
 * _puts - function used to place characters in string
 *
 * @str: String being printed
 * Return: i which is the value for the string
 */

int _puts(char *str)
{
	int i = 0;

	for ( ; *(str + i); i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
