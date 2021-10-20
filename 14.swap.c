#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before Swap: a=%d b=%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("After Swap: a=%d b=%d\n",a,b);
}