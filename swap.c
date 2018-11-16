/* swap
 * swap.c   
*/     
#include<stdio.h>

// CANNOT ACTUALLY SWAP - A and B only get the value
// void swap (int a_copy, int b_copy)   
// {      
//   int c;                        
//   printf("a is %d, b is %d\n", a, b);   // a: 10,  b: 20      
//   c = a;                                // c: 10
//   a = b;                                // a: 20
//   b = c;                                // b = 10
//   printf("(SWAP) a: 0x%d - b: 0x%d\n", &a, &b);  
//   printf("a is %d, b is %d\n", a, b);   // a is 20, b is 10
// }     

void swap(int *a, int *b)
{
  printf("(SWAP) adress of a: [%d] - address of b: [%d]\n", &a, &b);
  printf("a is %d, b is %d\n", *a, *b);
  int c = *a;
  *a = *b;                               
  *b = c;
  printf("a is %d, b is %d\n", *a, *b);
} 

int main(void)   
{      
  int a, b;      
  printf("a is ");      
  scanf("%d", &a);      
  printf("b is ");      
  scanf("%d", &b);      
  swap(&a, &b);
  printf("a: 0x%d - b: 0x%d\n", &a, &b);      
  printf("After swap:\na is %d\nb is %d\n", a, b);      
           
  return 0;      
}      