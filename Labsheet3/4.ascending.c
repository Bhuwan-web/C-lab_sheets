#include<stdio.h>
int main()
{
    int n[10];
    for(int i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
for(int i=10;i>0;i--){
    for(int j=0;j<i-1;j++){
        if(n[j]>n[j+1]){
            int small=n[j+1];
            n[j+1]=n[j];
            n[j]=small;
        }
    }
}
    for(int i=0;i<10;i++){
        printf("%d\n",n[i]);
    }
}