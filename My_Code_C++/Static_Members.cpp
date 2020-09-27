#include<iostream>
using namespace std;
class A{
    static int a;
    public:
        static int b;
        static int counter;
        void show(){
            cout<<a<<endl;
            cout<<counter++<<endl;
        }
        static void display(){
            cout<<"Inside Static member function (Display)"<<endl;
        }
};

//initializing static member outside class
int A::a = 10;
int A::counter = 0;
int A::b = 20;

int main(){
    A a;
    a.show();

    //static members can be accessed without
    //using object
    cout<<A::counter<<endl;

    cout<<endl<<A::b<<endl;

    A::display();
    a.display();
    return 0;
}