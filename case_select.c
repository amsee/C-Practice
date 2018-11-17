// Case Selection 
// case_select.c

#include <stdio.h>

int main(void) {
	
	char ch = 'c';
	switch (ch)
	{
	case 'a':
		printf("avocado");
		break;
	case 'b':
		printf("blueberries");
		break;
	case 'c':
		printf("cat");
		break;
	case 's':
		printf("strawberries");
		break;
	default: 
		printf("...");
	}
	return 0;
}