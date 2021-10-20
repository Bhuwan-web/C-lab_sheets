#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    int result=a>b?a+b:a-b;
    printf(a>b?"The sum will be %d":"The difference will be %d",result);
}