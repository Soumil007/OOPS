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
		cout<<endl<<a<<" + ("<<b<<"i)";
	}
	complex add(complex c2){
		complex c3;
		c3.a = a + c2.a;
		c3.b = b + c2.b;
		return c3;
	}
	complex substract(complex c2){
		complex c3;
		c3.a = a - c2.a;
		c3.b = b - c2.b;
		return c3;
	}
	complex multiply(complex c2){
		complex c3;
		c3.a = a*c2.a - (b*c2.b);
		c3.b = a*c2.b + b*c2.a;
		return c3;
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
			case 1: c3 = c1.add(c2);
				c3.display();
				break;
			case 2: c3 = c1.substract(c2);
				c3.display();
				break;
			case 3: c3 = c1.multiply(c2);
				c3.display();
				break;
			case 4: exit(1);
				break;
			default: cout<<"Wrong Input, Try again - "<<endl;
		}
	}while(ch!=4);
	return 0;	
}
