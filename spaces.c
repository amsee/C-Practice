// Layout: Spaces
// spaces.c 

#include <stdio.h>

int main(void) 
{

   int i; // space after keyword

        scanf("%d", &i); // no space after unary operator

        i = i * i; // single spaces around binary operators

        if (i == 7) // no spaces between identifiers or constants and parentheses 
                printf("Congrats!\n");

        for (i = 0; i < 10; i++) // single space after ;
                printf("%d ", i);   // no space after call identifier

        return 0;
 }
