#include"main"

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main(void)
{
	   char ch = 'a';

    _putchar("Lowercase English Alphabets:\n");
    while(ch <= 'z')
    {
        _putchar("%c ", ch);
        ch++;
    }
   _putchar("\n");
   return 0;

}
