#include<stdio.h>
#include<unistd.h>
//won't work.fork only works in mac & linux this way.
int main(){
	if(fork()&&fork()){
		fork();
	}
	printf("hello");
	return 0;
}