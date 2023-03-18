#include<stdio.h>
main(){
int x[2][5]={2,3,4,5,6,7,8,9};
for(int i=0; i<10; i++){
for(int j=0; j<10; j++){
printf("%d:%d-->%d\n",i,j,x[i][j]);
}
}
}