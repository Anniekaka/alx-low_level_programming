#include <stdio.h>
/**
 * main - This program prints the alphabet in lowercase without q and e
 *
 * Return:: Always 0
 *
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
					c++;
		}
	putchar('\n');
		return (0);
}
