#include <stdio.h>
#include "main.h"
#include <unistd.h>
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
		_putchar(x);
	}
	putchar('\n');
}
