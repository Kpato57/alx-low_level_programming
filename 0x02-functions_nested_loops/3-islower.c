#include "main.h"

/**
 * _islower - Check if char is lowercase
 * @C: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int C)
{
	char c;

	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
