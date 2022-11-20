//my reg no is RA2211042010032
#include <stdio.h>
void printTable(int);
int main()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    printf("Table of %d is:\n", number);
    printTable(number);
}

void printTable(int num)
{
    int i;

    for (i = 1; i <= 10; i++)
        printf("%5d\n", (num * i));
}
