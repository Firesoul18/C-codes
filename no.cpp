#include<stdio.h>
#include<stdlib.h>
int main(){
	char *name;
	scanf("%[^^z]",&name);
	printf("%s",name);
	gets(name);
	puts(name);
	
}