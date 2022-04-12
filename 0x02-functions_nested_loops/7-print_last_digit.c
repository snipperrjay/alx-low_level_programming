#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 
 */
int print_last_digit(int)
{
    int r;

    print_last_digit(45);
    print_last_digit(0);
    r = print_last_digit(-987);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
