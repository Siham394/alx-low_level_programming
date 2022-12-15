#include "main.h"

/**
 * _isdigit - checks for digits
 * @x: parameter
 * Return: 0 or 1
 */

int _isdigit(int x)
{
	if (x >= 48 && x < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
