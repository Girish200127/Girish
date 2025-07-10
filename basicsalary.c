#include<stdio.h>
void main(){
    float gs,hra,da,bs;
    printf("Entre your basic salary:");
    scanf("%f",bs);
    if (bs <= 1500){
        hra=bs*0.1;
        printf("Your HRA is:%f",hra);
        da=bs*0.9;
        printf("Your DA is:%f",da);
        gs=bs+hra+da;
        printf("Your Gross salary is:%f",gs);
    }  
        else {
            hra=500;
            printf("Your HRA is:%f",hra);
            da=bs*0.98;
            printf("Your DA is:%f",da);
            gs=bs+hra+da;
            printf("Your Gross salary is:%f",gs);
        }
}