// Bit Pattern
// bit.c

/*
Design and code a program that displays the bit pattern for an integer that occupies a single byte. Your program prompts the user for an integer between 0 and 255
and displays the 8 - bit binary equivalent of the integer.You may assume that the user enters a valid number.

The output from your program might look something like :

Enter an integer between 0 and 255 : 65
The binary equivalent of 65 is 01000001
*/

#include <stdio.h>

int main()
{
	int n, c, k;

	printf("Enter an integer between 0 and 255 : ");
	scanf("%d", &n);

	printf("The binary equivalent of 65 is ", n);

	for ((c = 31; c >= 0; c--)
	{
		k = n >> c;

		if (k & 1)
			printf("1");
		else
			printf("0");
	}

	printf("\n");

	return 0;
}