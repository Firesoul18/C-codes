#include <iostream>
using namespace std;

class InlineFunction
{
private:
    int x;
public:
    //this function is by default inline.
    getX(){
        cin>>x;
    }
};
