#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints with a string
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (x == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	if else(x < 6, x != 0);
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
