#include <stdio.h>

int main(void) {

	char grade;
	double percent;
	printf("Enter your letter grade: [A / B / C / D / F]");
	scanf("%c", &grade);

	switch (grade) {
	case 'A':
	case 'a': 
		percent = 94.1;
		break;
	case 'B':
	case 'b':
		percent = 86.9;
		break;
	case 'C':
	case 'c':
		percent = 76.9;
		break;
	case 'D':
	case 'd':
		percent = 66.9;
		break;
	default:
		grade = '?';
		percent = 0.0;
	}
	
	printf("The letter grade %c == %.1lf", grade, percent);

	return 0;
}