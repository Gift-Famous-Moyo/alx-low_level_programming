#include "main.h"

/**
 *_islower - This function checks for lowercase character.
 *@c: this is the int that will make use of argument
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
