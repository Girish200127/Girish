#include <stdio.h>

void main(){
    int ch,n,fact,a;
    printf("Enter 1 for factorial ");
    printf("\nEnter 2 for Odd number ");
    printf("\nEnter 3 for Prime number");
    printf("\nEnter one of the following option:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter your number:");
        scanf("%d",&n);
        fact=n;
        if (n==0)
            printf("\n the following number is zero");
            else {
                for (int i = 1; i < n; ++i) {
                fact *= i;
        }
        printf("Factorial of %d:%d ", n, fact);
        }
        break;
    case 2:
        printf("Enter your number ");
        scanf("%d",&n);
        if(n/2==0){
            printf("\n even");
        }
            else{
                 printf("\n odd");
            }
        break;
    case 3:
        printf("Enter your number ");
        scanf("%d",&n);
        if (n < 2){
            printf("\n this number is not prime number");
        }
        else{
            for (int i=1; i >= 2; i++) {
                 if (n % i == 0)
                    a++;
            }
            if(a>2){
                printf(" \n %d Is not a prime number",n);
            }
            else {
                printf("\n %d Is an prime number",n);
            }
         }
         break;             
    default: