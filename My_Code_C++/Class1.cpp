#include<iostream>
using namespace std;

class A{
    public:
    int a,b;

    //one    //two
    void add(A ob){
        ob.a+=a;
    }

    void add_ref(A & ob){
        ob.a+=a;
        ob.b+=b;
    }

    void add(A * ob){
        ob->a+=a;
        ob->b+=b;
    }
    void show(){
        cout<<a<<endl<<b<<endl;
    }
};
int main(){

    A one;
    one.a=10;
    one.b=20;

    A two;
    two.a=10;
    two.b=20;

    cout<<"Calling by value - "<<endl;
    one.add(two);
    cout<<"Showing one - "<<endl;
    one.show();
    cout<<"Showing two - "<<endl;
    two.show();

    cout<<"Calling by reference - "<<endl;
    one.add_ref(two);
    cout<<"Showing one - "<<endl;
    one.show();
    cout<<"Showing two - "<<endl;
    two.show();

    cout<<"Calling by address - "<<endl;
    one.add(&two);
    cout<<"Showing one - "<<endl;
    one.show();
    cout<<"Showing two - "<<endl;
    two.show();

    return 0;
}