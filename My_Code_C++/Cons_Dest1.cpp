#include<iostream>
#include<cstring>
using namespace std;
class test{
     string name; char *b;
public:
test(string n):name(n){
b=new char[10];
strcpy(b,"CSE_2020");
cout<<name<<" "<<b<<"  " <<"noparam"<<endl;
}
test(string n,char * str):name(n){
int len=strlen(str)+1;
b=new char[len];
strcpy(b,str);
cout<<name<<" "<<b<<"  "<<"param"<<endl;
}
~test();
};
test::~test(){
cout<<name<<" "<<b<<"   "<<"dest"<<endl;
delete b;
}

void func(){ cout<< "Function"<<endl;test obj("obj");}

int main(){
test one("one");
test two("two","HI");
func();
return 0;
}
test t("t"); test t2("t2","Global");

