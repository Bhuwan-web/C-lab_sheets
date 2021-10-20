#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);
    int area=l*b;
    int perimeter=2*(l*b);
    printf("For Rectangle of length %d and bredth %d \
    \n\tPerimeter= %d \
    \n\tArea= %d \
    \n",l,b,perimeter,area);
}