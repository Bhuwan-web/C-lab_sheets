#include<stdio.h>
int main()
{
    char word[100];
    printf("Enter a number: ");
    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++){
        if(word[i]+32>96 && word[i]+32 <123){
            word[i]=word[i]+32;
        }
        else if(word[i]-32>64 && word[i]-32 <91){
            word[i]=word[i]-32;
        }
    }
    printf("%s",word);
}