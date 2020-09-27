#include<iostream>
using namespace std;
void add();
void add(int);
//void add(int,int,int=100, int= 200);
int add(int,int);

int main(){
    add();
    add(10);
    add(1,2);
    cout<<add(20,30)<<endl;
}

void add(){
    cout<<"Hello World"<<endl;
}
void add(int a){
    cout<<"Passed integer - "<<a<<endl;
}
// void add(int a,int b,int c,int d){
//     cout<<a+b+c+d<<endl;
// }
int add(int a,int b){
    return a+b;
}