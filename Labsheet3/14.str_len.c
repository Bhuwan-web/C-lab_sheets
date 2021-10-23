#include<stdio.h>
int main()
{
    int count;
    char word[10];
    printf("Enter a word: ");
    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++){
        count +=1;
    }
    printf("%d",count);
}