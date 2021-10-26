#include<stdio.h>
int main(){
    char word[10];
    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++){
        for(int j=0;word[i+j+1]!='\0';j++){
            char temp=word[j];
            word[j]=word[j+1];
            word[j+1]=temp;
        }
    }
    printf("The reversed word is %s",word);
}