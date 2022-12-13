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
/**
 * main- i prinf
 * Reurn:0
 */
int main(void)
{
        print_alphabet();
        return (0);
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}


