// Constructor
// Initializer
// this-> pointer

#include<iostream>
using namespace std;
class test{
    int num;
    string name;
    public:
        test(int a):num(a){
            cout<<num<<endl<<name<<endl;
        } //Initializer
        test(){
            num=0;
            name="ABC";
            cout<<num<<endl<<name<<endl;
        }
        test(int a, string b);
};

// test::test(int num,string name):num(a),name(b){cout<<num<<endl<<name<<endl;}
//this pointer
test::test(int num, string name){
    this->num=num;
    this->name=name;
    cout<<num<<endl<<name<<endl;
}
int main(){
    test one;
    test two(10);
    test three(20,"Soumil");
    return 0;
}