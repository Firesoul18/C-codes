#include<iostream>
#include<stdlib.h>
using namespace std;
struct FP{
    char *name;
    int amount;
}s1,*s2;

int main(){
    FP* list = (FP *)malloc(5*sizeof(FP));
    for(int i=0; i<3; i++){
        list[i].name="HII";
        list[i].amount=33;
    }
    for(int i=0; i<3; i++){
        cout<<list[i].name<<endl;
        cout<<list[i].amount<<endl<<endl;
    }
}