#include<iostream>
using namespace std;

class Person{
    int x;
    char *name;
public:
    Person(int x=4, char *name="x"){
    this->name = name;
    this->x = x;
    cout<<"You can't create a Default Constructor if I am here."<<endl;
}
    display(){
        cout << "X: " << this->x << " Name: " << this->name << endl;
    }
};


int main(int argc, char const *argv[])
{
    Person p(4);
    Person *p2 = new Person();
    Person *p3 = new Person[3];
    Person parray[5];
    for(int i=0; i<5; i++){
        cout<<parray[i].display()<<endl;
    }
    return 0;
}
