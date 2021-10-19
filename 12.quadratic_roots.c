#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c; // as ax^2+bx+c
    printf("For quadraatic equation ax^2+bx+c \
    \n Enter a,b,c respectively: ");
    scanf("%d%d%d",&a,&b,&c);
    int check=b*b-4*a*c;
    if(check<0){
        printf("The equation have no real solution");
        return 0;
    }else if(check==0){
        printf("The equation have two equal roots");
        
    }
    float root1=((-b+sqrt(check))/(2*a));
    float root2=((-b-sqrt(check))/(2*a));
    printf("Roots of equation are :\
    \n root1: %.1f \
    \n root2: %.1f\n",root1,root2);
}