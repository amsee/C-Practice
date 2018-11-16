// Truncation with Assignment Operators
// truncation.c

#include <stdio.h>

int main(void)
{
	double cash;
	int loonies;

	printf("Cash ? ");
	scanf("%lf", &cash);
	loonies = cash; // truncation
	printf("%d loonies.\n", loonies);

	return 0;
}

/*
OUTPUT
Cash? 23.45
23 loonies.
*/