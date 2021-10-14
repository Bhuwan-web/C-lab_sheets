#include<stdio.h>
int main(){
    int num;
    printf("Enter three digit numbers: ");
    scanf("%d",&num);
    int f_num=num/100;
    int l_num=num%10;
    int s_num=num/10-f_num*10;
    int reversed=l_num*100+s_num*10+f_num;
    printf("The reverse of given number is %d\n",reversed);
}