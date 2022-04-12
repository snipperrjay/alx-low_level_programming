#include"main.h"

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main()
{
	   char ch = 'a';

    void print_alphabet(void)("Lowercase English Alphabets:\n");
    while(ch <= 'z')
    {
        _putchar("%c ", ch);
        ch++;
    }
   _putchar("\n");
   return 0;

}
