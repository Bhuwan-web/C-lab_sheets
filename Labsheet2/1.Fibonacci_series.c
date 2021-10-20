#include<stdio.h>
int main()
{
    int i=0,j=1;
    for(int a=0;i<=10;a++){
        printf("%d\t",j);
        int temp=i+j;
        i=j;
        j=temp;
    }
}