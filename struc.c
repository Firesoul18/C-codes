#include<stdio.h>
#include<stdlib.h>

typedef struct fp{
    int x;
    char *s;
}f;

int main(){
    f x1;
    // x1.s= malloc(10*sizeof(char));
    // printf("%s",x1.s);
    scanf("%[^'\n']",x1.s);
    x1.x=3;
    printf("%s has integer x=%d",x1.s,x1.x);


    f x2 ={6,"Hey There"};
    printf("\n%s has integer x=%d",x2.s,x2.x);
    return 0;
}