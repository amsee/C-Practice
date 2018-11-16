// From minutes to hours
// cast.c

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int minutes;
	float hours;

	printf("Minutes ? ");
	scanf("%d", &minutes);
	hours = (float)minutes / 60;
	printf("= %.2lf hours\n", hours);

	return 0;
}
// EXAMPLE INPUT: 45
// OUTPUT:

//Minutes ? 45 
//=  0.75 hours
