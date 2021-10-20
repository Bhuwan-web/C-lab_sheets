#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("For given two numbers %d and %d \
    \n Sum: %d \
    \n Difference: %d \
    \n Product: %d \
    \n Quotient: %.2f \
    \n",a,b,a+b,a-b,a*b,(float)a/b);

}