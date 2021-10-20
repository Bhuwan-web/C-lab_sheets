#include<stdio.h>
int main(){
    int r;
    printf("Enter a radius of circle: ");
    scanf("%d",&r);
    int pi=3.14;
    int parameter=2*pi*r;
    int area=pi*r*r;
    printf("\n\nFor circle of radius: %d \
    \n\tCircumference = %d \
    \n\tArea = %d \
    \n",r,parameter,area);
}