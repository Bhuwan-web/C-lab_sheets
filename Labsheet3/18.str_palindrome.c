#include<stdio.h>
int main(){
    char word[10],rev[10];
    scanf("%s",word);
    int i;
    for(i=0; word[i]!='\0';i++){
        rev[i]=word[0];
        for(int j=0;word[i+j+1]!='\0';j++){
            char temp=word[j];
            word[j]=word[j+1];
            word[j+1]=temp;
        }
    }
    rev[i]='\0';


    for(int i=0;word[i]!='\0';i++){
        if(word[i]!=rev[i]){
            printf("The string is not a palindrome\n");
            return 0;
        }
    }
    printf("The string is a palindrome");
}