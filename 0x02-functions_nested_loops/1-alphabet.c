#include"main.h"

void print_alphabet()
{
	//loop counter or a variable that
	//will store initial alphabet,
	//from where we will print the alphabets
	char alphabet;
	//assigning 'a' as initial alphabet
	alphabet='a';

	//print statement
	_putchar("Lowercase alphabets:\n");

	//loop statement, that will check the condition
	//and print the alphabets from 'a' to 'z'
	while(alphabet<='z')
	{
		//printing the alphabets
		_putchar("%c ",alphabet);
		//increasing the value by 1
		alphabet++;
	}
   return 0;

}
