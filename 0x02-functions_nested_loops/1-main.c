#include <stdio.h>
/**
 * print_alphabet -prints alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char x;
        for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
