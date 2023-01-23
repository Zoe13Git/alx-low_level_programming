#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int a;
	int b;

	a = atoi(argv[1]);

	printf("Str = %s\n", argv[1]);
	printf("Int = %d\n", a);
	return 0;
}

