#include<iostream>
using namespace std;
void Add(int a, int b){
    cout<<a+b;
}

void Add(int a, float b){
    cout<<a+b;
}

void Add(int a, double b){
    cout<<a+b; 
}

void Add(float a, double b){
    cout<<a+b;
}

void Add(int a, int b, float c){
    cout<<a+b<<c;
}

void Add(int a, float b, int c){
    cout<<a+b<<c;
}

void Add(int a, int b, int c){
    cout<<a+b<<c;
}

int main(int argc, char const *argv[])
{
    int a=23;
    float b=32.2;
    double c=33.2;
    int d =4;
    Add(a,b,c);
    Add(a,b);
    Add(a,c);
    Add(c,d);
    Add(a,d);
    Add(c,d);
    Add(a,b,d);
    return 0;
}
