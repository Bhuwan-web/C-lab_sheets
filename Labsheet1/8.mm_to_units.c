#include<stdio.h>
int main(){
    int n;
    printf("Enter distance in mm: ");
    scanf("%d",&n);
    float in_km=(float)n/1000;
    float in_m=(float)n/100;
    float in_cm=(float)n/10;
    int in_mm=n;
    printf("Distance %d mm in different units: \
    \n in KM: %f \
    \n in meter: %f \
    \n in CM: %f \
    \n in MM: %d \
    \n",n,in_km,in_m,in_cm,in_mm);

}