#include "main.h"

/**
 * print_alphabet_x10- alphabet
 * Return: Always
 */

void print_alphabet_x10(void)
{
	char x;

	for (x = 0; x <= 9; x++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
