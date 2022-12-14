#include "main.h"

/**
 * islover - checks if its lower case
 * Return: 1 in case of success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122) 
		return (1);
	else 
		return (0);
}
