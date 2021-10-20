#include<stdio.h>
int main(){
    float c; //c as celcius unit
    printf("Enter tempreature in celcius: ");
    scanf("%f",&c);
    float f=(float)9/5*c+32;//farenheit unit as f
    //right hand side should be made float because the 9/5 only gives 1 insted of 1.8 for it act as integer in normal case
    printf("\n%.2f celcius =%.2f farenheit\n",c,f);
    return 0;
}