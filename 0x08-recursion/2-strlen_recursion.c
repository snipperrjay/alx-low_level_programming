#include "main.h"

/**
 * main - check code
 *
 * _strlen_recursion_strlen_recursion - print length of string
 *
 * @*s: string
 * Return : nothing
 **/

int _strlen_recursion(char *s);
{
	if (*s >= '\0')
		_putchar('\n');
}

int main()
{
	char *s[] = "programming is fun";
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	_putchar("Lenght of the string: %d\n", i);

	return 0;
}
