//my reg no is RA2211042010032
#include<stdio.h>  
int even_odd(int);  
void main()  
{  
 int n,a=0;  
 printf("\nGoing to check whether a number is even or odd");  
 printf("\nEnter the number: ");  
 scanf("%d",&n);  
 a= even_odd(n);  
 if(a==0)  
 {  
    printf("\nThe number is odd");  
 }  
 else   
 {  
    printf("\nThe number is even");  
 }  
}  
int even_odd(int n)  
{  
    if(n%2==0)  
    {  
        return 1;  
    }  
    else   
    {  
        return 0;  
    }  
}  
