#include<iostream>
using namespace std;

class Integer{
    private:
    int x;

    public:
    Integer operator=(int x){
        return Integer(x);
    }
    void show(){
        cout<<x;
    }

    Integer(int=0);


// //Without Friend Function->
//
// //preincrement operator
//     Integer operator++(){
//         this->x++;
//         return Integer (this->x);
//     }

// //postincrement operator
// Integer operator++(int){
//     return Integer(this->x++);
// }


//With Friend Function->
friend Integer operator++(Integer&);
friend Integer operator++(Integer&,int);
};

Integer operator++(Integer& a){
    a.x++;
    return Integer(a.x);
}

Integer operator++(Integer& a,int){
    return Integer(a.x++);
}

Integer::Integer(int x){
    this->x = x;
}

int main(int argc, char const *argv[])
{
    Integer i=4;
    Integer j=++i;
    Integer k=i++;
    i.show();
    j.show();
    k.show();
    return 0;
}
