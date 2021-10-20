#include<stdio.h>
int main()
{
for(int i=1;i<=500;i++){
    int num=i;
    
    int sum=0;
    while (num>0)
    {
        int rem=num%10;
        num=num/10;
        sum+=rem*rem*rem;
    }
    
    printf("%d : %d\n",i,sum);
}
}