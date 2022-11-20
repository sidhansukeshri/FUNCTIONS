//my reg no is RA2211042010032
#include <stdio.h>
int stringLength(char*);
int main()
{
    char text[100];
    int length;
    printf("Enter text (max- 100 characters): ");
    scanf("%s", text);
    length = stringLength(text);
    printf("Input text is: %s\n", text);
    printf("Length is: %d\n", length);
}

int stringLength(char* str)
{
    int len = 0;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}
