#include <stdio.h>
#define MAX_ELEMENTS 100
int sumOfElements(int[], int);
int main()
{
    int N, i, sum;
    int arr[MAX_ELEMENTS];
    printf("Enter total number of elements(1 to %d): ", MAX_ELEMENTS);
    scanf("%d", &N);
    if (N > MAX_ELEMENTS) {
        printf("You can't input larger than MAXIMUM value\n");
    }
    else if (N < 0) {
        printf("You can't input NEGATIVE or ZERO value.\n");
    }
    printf("Enter array elements:\n");
    for (i = 0; i < N; i++) {
        printf("Enter element %4d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    sum = sumOfElements(arr, N);
    printf("\nSUM of all Elements: %d\n", sum);
}

int sumOfElements(int x[], int n)
{
    int sum, i;
    sum = 0;
    for (i = 0; i < n; i++) {
        sum += x[i];
    }
    return sum;
}
