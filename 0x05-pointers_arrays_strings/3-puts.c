#include "main.h"
/**
 * _puts - prints a string
 * @str: String to be printed
 * Return: The length of the string
 */

void _puts(char *str)
{

	while
		(*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
