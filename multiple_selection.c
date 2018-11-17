// Compound Conditions
// multiple_selection.c

#include <stdio.h>

int main(void)
{
	int age;

	printf("Enter age: ");
	scanf("%d", &age);

	if (age > 12 && age < 16) {
		printf("Student Fare - no id required\n");
	} 
	else if (age > 15 && age < 20) {
		printf("Student Fare - id is required\n");
	}
	else if (age < 13) {
		printf("Child ride for free!\n");
	}
	else if (age >= 65) {
		printf("Senior Fare - id is required\n");
	}
	else {
		printf("Adult Fare\n");
	}
	return 0;
}