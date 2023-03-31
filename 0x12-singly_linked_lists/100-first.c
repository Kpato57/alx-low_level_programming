#include <stdio.h>

(void)_attribute_((constructor)) here(void);

/**
 * here - prints a sentence before the main
 * function is executed
 */

void here(void)
{
	printf("You're beat! and yet, you must allow,"
		"\nI bore my house upon my back!\n");
}
