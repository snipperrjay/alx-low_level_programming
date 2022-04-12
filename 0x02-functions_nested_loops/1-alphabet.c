#include "main.h"  
  
void print_alphabet(void)  
{  
    char ch = 'a';  
  
    while(ch <= 'z')  
    {  
        _putchar("%c ", ch);  
        ch++;  
    }  
    _putchar("\n");  
  
    return 0;  
} 
