#include<iostream>
using namespace std;

class OperatorOverLoading {
private:
    int a, b;

public:
    OperatorOverLoading(int a, int b = 3);
    OperatorOverLoading operator+(OperatorOverLoading x);
    void show();
};

OperatorOverLoading::OperatorOverLoading(int a, int b) {
    this->a = a;
    this->b = b;
}

OperatorOverLoading OperatorOverLoading::operator+(OperatorOverLoading x) {
    return OperatorOverLoading(this->a + x.a, this->b + x.b);
}

void OperatorOverLoading::show() {
    cout << "a: " << this->a << ", b: " << this->b << endl;
}

int main(int argc, char const *argv[]) {
    OperatorOverLoading x(3, 4);
    OperatorOverLoading y(5, 6);
    (x+y).show();
    return 0;
}
