#include <stdio.h>

void main()
{
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("your option is been selected");
        break;
    case 2:
        printf("your command is been selected");
        break;
    default:
        printf("exit");
        break;
    }
}