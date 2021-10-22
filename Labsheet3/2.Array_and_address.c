#include<stdio.h>
int main()
{
    int n[10];
    for(int i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("number: %d\t",n[i]);
        printf("address: %p\n",&n[i]);
    }
    
}