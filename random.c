// Prefix and Postfix Operators
// pre_post.c

#include <stdio.h>

int main(void)
{
	int age = 19;

	printf("Prefix:  %d\n", ++age); // 19+1 = 20 output:20
	printf("         %d\n", age); // output: 20	
	printf("Postfix: %d\n", age++); // 20+1 = 21 output: 
	printf("         %d\n", ++age); // 21+1 = 22

	return 0;
}
