#include "main.h"

/**
 *_memset - fill memory with constant
 *@s: space of memory
 *@b: byte
 *@n: memory area
 *Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
