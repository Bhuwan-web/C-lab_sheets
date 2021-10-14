#include<stdio.h>
int main(){
    int days;
    printf("Enter time in days: ");
    scanf("%d",&days);
    int years=days/365;
    int months=(days/30)-(years*12);
    int rem_days=days-months*30-years*12*30;
    printf("%d years %d months %d days\n",years,months,rem_days);
}