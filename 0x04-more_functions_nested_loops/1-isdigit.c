#include "main.h"

/**
 * _isdigit - a functions that checks for digits 0-9
 * @c: input
 * Return: 1 if c is a digit, 0 0therwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
