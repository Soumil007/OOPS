/*
Q.> 	WAP in C++ to make a function to accept a number as a
	parameter and print proper output if it is both prime and
	Fibonacci or not. For example,
	Input: 5
	Output: “Both prime and Fibonacci”
	Input: 7
	Output: “Prime but not Fibonacci”
	Input: 8
	Output: “Fibonacci but not prime”
	Input: 12
	Output: “Neither prime nor Fibonacci”
*/

#include<iostream>
#include<math.h>
using namespace std;

void eval(int n){
	//for fibonacci
	int a=0,b=1,c=0,flagF=0,flagP=0;
	while(c<=n){
	
		if(c==n){
			flagF=1;
			break;
		}
		else{
			c=a+b;
			a=b;
			b=c;
		}	
	}
	//for prime
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0){
			if(i!=1){
				flagP=1;
			}
		}
		else{
			continue;
		}
	}
	
	//FlagF=1 == Yes Fibonacci
	//FlagP=0 == Yes Prime
	
	if(flagF==1&&flagP==1){
		cout<<"Fibonacci But Not Prime";
	}
	else if(flagF==1&&flagP==0){
		cout<<"Both Fibonacci And Prime";
	}
	else if(flagF==0&&flagP==1){
		cout<<"Neither Fibonacci Nor Prime";
	}
	else{
		cout<<"Neither Fibonacci Nor Prime";
	}
}

int main(){
	int n,f=0;
	do{
		f=0;
		cout<<"Enter a number to be evaluated -  ";
		cin>>n;
		eval(n);
		cout<<endl<<"Do you wish to continue(non-zero number) - ";
		cin>>f;
	}while(f!=0);
	
	return 0;
}
