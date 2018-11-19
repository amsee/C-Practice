// Layout: Indentation
// indentation.c      

#include <stdio.h>

int main(void){   

         for (i = 0; i < n; i++) {
                 for (j = 0; j < n; j++) {
                         for (k = 0; k < n; k++) {
                                 int ijk = i * j * k;
                                 if (ijk != 0)
                                         printf(" %4d", ijk); 
                                 else
                                         printf("    ");
                         }
                         printf("\n");
                 }
                 printf("\n");
         }
         printf("That's all folks!!!\n");

         return 0;
}