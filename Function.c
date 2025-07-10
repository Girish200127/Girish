#include <stdio.h>

void add(a,b);
void main(){
    int a,b;
    printf("enter any number 1 =");
    scanf("%d",&a);
    printf("enter any number 2 =");
    scanf("%d",&b);
    add(a,b);

}
void add(int a,int b){
    printf("the sum is %d \n",a+b);
}