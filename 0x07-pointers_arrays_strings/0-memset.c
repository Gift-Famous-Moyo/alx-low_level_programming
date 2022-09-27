#include "main.h"

/**
 * memset - This one fills a memory block with a constant byte
 * @s: address to memory block
 * @b: char to be used here
 * @n: number of the bytes to be used is here
 *
 * Return: pointer to the memory block
 */

char _memset(char *s, char *b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

