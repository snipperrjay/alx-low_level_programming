#include "main.h"

/**
 * reset_to_98 - update address function
 *@n: integer
 * 
 * Return: nothing 
 **/


void reset_to_98(int *n)
{
	int n;

	n = 402;
	printf("%d\n", n);
	rest_to_98(&n);
	printf("%d\n", n);
		
	*n = 98;
}
