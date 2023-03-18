#include <iostream>
using namespace std;
int x = 3;//global variable
int main(int argc, char const *argv[])
{
    int x = 2;//local variable
    cout << x;  //-> this will print the local variable
    cout << ::x;    //:: is global resolution operator and prints the global variable
    return 0;
}
