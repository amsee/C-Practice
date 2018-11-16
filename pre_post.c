 // Prefix and Postfix Operators
 // pre_post.c

#include <stdio.h>

 int main(void)
 {
         int age = 19;

         printf("Prefix:  %d\n", ++age); // 20
         printf("         %d\n", age); // 20
         printf("Postfix: %d\n", age++); // 20
         printf("         %d\n", ++age); // 

         return 0;
 }
