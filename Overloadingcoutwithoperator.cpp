#include<iostream>
using namespace std;
class A{
    int a;
    friend ostream& operator<<(ostream&, A&);
    friend istream& operator>>(istream&, A&);
    public:
    A(int x){
        this->a = x;
    }
    A();
};

ostream& operator<<(ostream& a, A& b){
    a<<b.a;
    return a;
}
istream& operator>>(istream& a, A& b){
    a>>b.a;
    return a;
}

int main(int argc, char const *argv[])
{
    A x(3), y;
    cin>>y;
    cout<<x<<y;
    return 0;
}
