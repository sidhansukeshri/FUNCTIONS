//my reg no is RA2211042010032
#include <stdio.h>
void swap(int *x, int *y);
int main ()
{printf("RA2211042010042\n");
 int a = 590;
 int b = 690;
 printf("Before swap, value of a : %d\n", a );
 printf("Before swap, value of b : %d\n", b );
 swap(&a, &b);
 printf("After swap, value of a : %d\n", a );
 printf("After swap, value of b : %d\n", b );
}
void swap(int *x, int *y)
{
 int temp;
 temp = *x; 
 *x = *y; 
 *y = temp; 
 return;
}
