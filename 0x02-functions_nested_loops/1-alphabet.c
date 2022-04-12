#include "main.h"  
  
void print_alphabet(void)  
{  
    char ch = 'a';  
  
    while(ch <= 'z')  
    {  
        _putcahr("%c ", ch);  
        ch++;  
    }  
    printf("\n");  
  
    return 0;  
} 
