#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of traingle; ");
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    float s=(float)sum/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of traingle is %.2f",area);
    return 0;
}