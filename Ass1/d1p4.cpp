/*
Create a structure name complex number and using member
functions multiply, add and subtract two complex numbers.
*/
#include<iostream>
using namespace std;

struct complex{
	int a,b;
	void init(){
		cout<<endl<<"Enter the complex number (a+bi)"<<endl;
		cin>>a;
		cin>>b;
	}	
	void display(){
		cout<<"Inserted - ";
		cout<<a<<" + ("<<b<<"i)";
	}
	void add(complex c1,complex c2){
		complex c3;
		c3.a = c1.a + c2.a;
		c3.b = c1.b + c2.b;
		cout<<"Added - "<<c3.a<<" + (i "<<c3.b<<")";
	}
	void substract(complex c1,complex c2){
		complex c3;
		c3.a = c1.a - c2.a;
		c3.b = c1.b - c2.b;
		cout<<"Difference - "<<c3.a<<" + (i "<<c3.b<<")";
	}
	void multiply(complex c1,complex c2){
		complex c3;
		c3.a = c1.a*c2.a - (c1.b*c2.b);
		c3.b = c1.a*c2.b + c1.b*c2.a;
		cout<<"Product - "<<c3.a<<" + (i "<<c3.b<<")";
	}
	
};

int main(){
	complex c1,c2,c3;
	c1.init();
	c1.display();
	c2.init();
	c2.display();
	
	int ch;
	
	
	do{
		cout<<endl<<"Chose An Option - "<<endl<<"1. Add"<<endl<<"2. Substract"<<endl<<"3. Multiply"<<endl<<"4. Exit"<<endl<<"Your Option -> ";
		cin>>ch;
		switch(ch){
			case 1: c3.add(c1,c2);
				break;
			case 2: c3.substract(c1,c2);
				break;
			case 3: c3.multiply(c1,c2);
				break;
			case 4: exit(1);
				break;
			default: cout<<"Wrong Input, Try again - "<<endl;
		}
	}while(ch!=4);
	return 0;	
}
