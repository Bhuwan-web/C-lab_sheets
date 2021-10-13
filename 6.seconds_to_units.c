#include<stdio.h>
int main(){
    int s;
    printf("Enter time in seconds: ");
    scanf("%d",&s);
    float hrs=(float)s/(60*60);
    float min=(float)s/60;
    int sec=s;
    printf("Time %d seconds in different units: \
    \n Hours: %.2f \
    \n Minutes: %.2f \
    \n Seconds: %d \
    \n",s,hrs,min,sec);
}