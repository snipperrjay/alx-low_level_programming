#include "main.h"
#include <string.h>

/**
 * main.h - check code
 *
 * _strlen_recursion_strlen_recursion - print length of string
 *
 * @*s: string
 * Return : nothing
 **/

int _strlen_recursion(char *s)
{
	if (*s >= '\0')
		_putchar('\n');
}

int main()
{
	char *s[5];
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	_putchar("%d\n", i);

	return 0;
}
