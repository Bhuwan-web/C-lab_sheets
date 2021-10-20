#include<stdio.h>
int main()
{
    int maths,phy,iit,c,dl;
    printf("Enter marks of subjects maths,physics,iit,c,and dl respectively\n");
    scanf("%d%d%d%d%d",&maths,&phy,&iit,&c,&dl);
    int sum=maths+phy+iit+dl+c;
    float aggregate=(float)sum/5;
    float percentage=(float)sum/500;
    printf("The aggregate and percentage of 5 subjects are: \
    \n aggregate: %.2f \
    \n percentage: %0.2f\n",aggregate,percentage);
}