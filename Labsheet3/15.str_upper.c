#include<stdio.h>
int main(){
    char word[100];
    printf("Enter a word: ");
    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++){
        if(word[i]-32>64)
            word[i]=word[i]-32;
    }
    printf("%s\n",word);
    
}