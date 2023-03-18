#include<stdio.h>
int main(void){
    char *string ="THIS IS STRING";
    int length=0;
    int i=0;
    while(string[i]!='\0'){
        length+=1;
        printf("%c",string[i]);
        i++;
    }
    printf("\n%d",length);
}