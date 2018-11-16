#include <stdio.h>

int main(void) {

	float cash;

	//prompt user to enter the amount of cash in their pockets (4.52)
	printf("How much money do you have in your pockets ? ");
	scanf("%f", &cash);

	printf("The amount of money in your pockets is %.2f", cash);
}