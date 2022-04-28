#include "main.h"

/**
 * main - check code
 *
 * print_rev_recursion - print string
 *
 * Return nothing:
 *
 **/

 void _print_rev_recursion(char *s);
{
	if (*s)


	{
		reverse(s + 1);

		_putchar("%c", *s);
	}
}
int main()
{
	char *s[] = "Alfred";

		reverse(*s);
		_putchar("%s\n", *s);


	return 0;
}
