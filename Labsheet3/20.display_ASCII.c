#include<stdio.h>
int main(){
    char word[10];
    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++){
        printf("%d \t",word[i]);
    }
    printf("\n");
}