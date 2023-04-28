class A{
    int *arr;
    public:
    A(int x){
        arr = new int[x];
    }
    int* returnArray(){
        return this->arr;
    }
};


class B: public A{
    public:
    B(int x):A(x){
    }
};