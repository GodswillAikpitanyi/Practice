#include <stdio.h>
#include "main.h"
/*
 *
 */
void puts_half(char *str)
{
	int length, i;

	for (length = 0; str[length]; i++)
		;
	for (i = (length + 1) / 2; str[i]; i++)
	{
		_putchar(str[i]);
	}
}
