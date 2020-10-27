#include "holberton.h"

/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @function_list: A list of all the posible functions.
 * @lst: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, specifier_t function_list[], va_list lst)
{
	int i, j, r_val, b;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; function_list[j].spec[0] != NULL; j++)
			{
				if (format[i + 1] == function_list[j].spec[0])
				{
					r_val = function_list[j].(lst);
					if (r_val == -1)
						return (-1);
					b += r_val;
					break;
				}
			}
			if (function_list[j].spec[0] == NULL && format[i + 1] != ' ')
			{
			  
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					b = b + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_write_char(format[i]); /*call the write function*/
			b++;
		}
	}
	return (b);
}
