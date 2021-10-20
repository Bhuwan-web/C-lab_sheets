#include<stdio.h>
int main()
{
    int a;
    printf("Enter a num: ");
    scanf("%d",&a);
    int rem=a%5;
    printf("The remainder is %d",rem);
    return 0;
}