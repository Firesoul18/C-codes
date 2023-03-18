#include<stdio.h>
#include<stdlib.h>
int main(void){
    char *string ="THIS IS STRING";
    int length=0;
    int i=0;
    while(*(string+i)!='\0'){
        length+=1;
        i++;
    }
    length+=1;
    char *str2=malloc(length*sizeof(char));
    i=0;
    while(string[i]!='\0'){
        str2[i]=string[i];
        i++;
    }
    str2[i]='\0';
    //string means &string[0]
    //str2=string;
    printf("%s",str2);
}