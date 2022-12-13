#include "main.h"
/**
 * print_alphabet_x10-prints aplhabet
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		char y;

		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
			_putchar('\n');
	}
}


