//program to demonstrate function overloading. 

#include<iostream>
#define pi 3.14
using namespace std;

class CalcArea{
	
public:
	int Area(int);
	int Area(int,int);
	float Area(float);	

};
int CalcArea::Area(int s){
	return s*s;
}
int CalcArea::Area(int l,int b){
	return l*b;
}
float CalcArea::Area(float r){
	return pi*r*r;
}

int main(){
	int ch;
	char op;
	CalcArea a;
	do{
		cout<<"#####################"<<endl;
		cout<<"1.CALC SQUARE AREA\n2.CALC RECTANGLE AREA\n3.CALC CIRCLE AREA\n4.EXIT\nENTER YOUR CHOICE - ";
		cin>>ch;
		cout<<"#####################"<<endl;
		switch(ch){
			case 1:
				int s;
				cout<<"Enter Side length - ";
				cin>>s;
				cout<<"Area of square with side length "<<s<<" is - "<<a.Area(s)<<endl;
				break;
			case 2:
				int l,b;
				cout<<"Enter Length and Breadth - ";
				cin>>l>>b;
				cout<<"Area of rect is - "<<a.Area(l,b)<<endl;
				break;
			case 3:
				float r;
				cout<<"Enter the Radius - ";
				cin>>r;
				cout<<"Area of circle is - "<<a.Area(r)<<endl;
				break;
			case 4:
				exit(0);
				break;
			default: cout<<"wrong choice !!";
				
		}
		
		cout<<"Do you wish to continue(y/Y) - ";
		cin>>op;
	}while(op=='y'||op=='Y');
	cout<<"Thank You!!"<<endl;
	cout<<"#####################"<<endl;
	return 0;
	
}
