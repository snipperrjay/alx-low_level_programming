#include "main.h"

/**
 * int _putchar(char c)
 *
 * modif_my_param set the integer to 98
 * Return: Always 0
 **/


int main.c;
{
	int n;
	int *p;

	n = 98;
	p = &n;
	_putchar("Value of 'n' before call: %d\n", n);
	_putchar("value of 'p': %p\n", p);
	_putchar("Address of 'n': %p\n", n);
	_putchar("Address of 'p': %p\n", p);
	
	modif_my_param(p);
	_putchar("Value of 'n' fter the call: %d\n", n);


	return 0;
}
