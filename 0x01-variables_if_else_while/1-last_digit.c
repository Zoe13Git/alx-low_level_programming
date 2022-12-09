#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry poing
 * Return: always 0
 */


int main(void)
{
	int n;	
	int last = n % 10;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */

	last = last < 0 ? -last : last ;

	printf("The last digit of %d is %d ", n, last);
	
	if (last > 5)
		printf("and is greater than 5\n");
	else if (last == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
