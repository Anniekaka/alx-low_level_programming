#include "main.h"
/**
 * print_rev - prints za string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		s++;

	for (i = i - 1; i <= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
