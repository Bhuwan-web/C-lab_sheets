//Armstrong number 
// numbers like 153=1^3+5^3+3^3 is called armstrong number
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
    };
    if(i==sum){
    printf("%d : %d\n",i,sum);
    }
}
}