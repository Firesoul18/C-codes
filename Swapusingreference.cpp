#include <iostream>
using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a=3;
//     int b=4;
//     cout<<"a: "<<a<<" b: "<<b<<endl;
//     swap(a,b);
//     cout<<"a: "<<a<<" b: "<<b;
//     return 0;
// }


// void swap(int *a, int *b){
//     cout<<"This is pointer function: "<<endl;
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }  //--> this is older approach (used in c).


//inline function: when we declare a function inline it doesn't get called, whenever we call it it's body will go to the calling member.
inline void swap(int &x, int &y){
    cout<<"This is reference function: "<<endl;
    int temp=x;
    x=y;
    y=temp;
}


int main(int argc, char const *argv[])
{
    int a=3,b=4;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    swap(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;
    return 0;
}
