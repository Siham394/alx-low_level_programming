#include "main.h"

/**
 * _abs - function
 * @n: number to
 * Return: always 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}

