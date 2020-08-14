#include<iostream>
using namespace std;
struct Num{
	int a,b,c;
	void init(int x,int y,int z){
		a=x;
		b=y;
		c=z;	
	}
	void add(Num n1,Num n2){
		cout<<(n1.a+n2.a)<<endl;
	}
	
};
int main(){

	Num n1,n2,n3;
	n1.init(1,2,3);
	n2.init(10,20,30);
	n3.add(n1,n2);	
	return 0;
}
