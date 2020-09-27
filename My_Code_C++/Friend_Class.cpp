#include<iostream>
using namespace std;

class A; //forward declaration
class B{
    public:
    int a,b;

    friend void add(A, B);
};

class A{
    public:
    int a, b;

    friend void add(A ,B);
};

void add(A ob1, B ob2){
    cout<<ob1.a+ob2.a<<endl;
    cout<<ob1.b+ob2.b<<endl;
}

int main(){
    A one;
    one.a = 10;
    one.b = 20;

    B two;
    two.a = 10;
    two.b = 20;

    add(one, two);
    return 0;
}