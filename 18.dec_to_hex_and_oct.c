#include<stdio.h>
#include<string.h>
void dec_to_any(int,int);
// void to_oct(int);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    dec_to_any(num,8); //dec_to_any (number,base)
    dec_to_any(num,16);
}
void dec_to_any(int num,int base){
    int dec_num=num;
    char system[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char hex_val[10];
    int i=0;
    for(i=0;num>0;i++){
        int ans=num%base;
        hex_val[i]=system[ans];
        num=num/base;
    }
    hex_val[i]='\0';
    char temp;
    int len=(strlen(hex_val)-1);
    for(int i=0,n=len;i<=n/2;i++,n--){
        temp=hex_val[i];
        hex_val[i]=hex_val[n];
        hex_val[n]=temp;
    }
    printf(base==16?"\
    The hexadecimal of decimal %d is %s\n":"\
    The octal of decimal %d is %s \n",dec_num,hex_val);
}
