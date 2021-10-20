#include<stdio.h>
int main()
{
    int r; 
    printf("Enter a radius: ");
    scanf("%d",&r);
    float PI=3.14;
    float volume=(float)4/3*PI*r*r*r;
    printf("The volume of shapre is %.2f\n cubic unit",volume);
    return 0;
}