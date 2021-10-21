#include<stdio.h>
int main()
{
    int number;
    int pos=0,neg=0,zero=0;
    printf("Enter list of numbers: ");
    while (number!=-150)
    {
        scanf("%d",&number);
        if(number>0)
            pos+=1;
        else if(number<0)
            neg+=1;
        else
            zero+=1;
        
    }
    printf("Details: \
    \n POsitive Integers: %d \
    \n Negative Inetegers: %d \
    \n Zero Integers : %d \
    \n",pos,neg-1,zero);
}