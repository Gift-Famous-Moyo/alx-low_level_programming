#include "main.h"

/**
 *_isalpha - function used to check if c is a letter, lowercase or upper.
 *@c: This is the int that will use the function
 *Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
