/*
	Create a structure named Time with three variables hour, minute
	and second. Using member function, add and subtract two Time
	variables. For example,
	Input: 1:15:20 and 2:20:25
	Output: 3:35:45
	Input: 11:55:20 and 2:20:40
	Output: 14:16:00
	Input: 23:59:59 and 1:59:59
	Output: Next day 1:59:58
*/
#include<iostream>
using namespace std;
struct Time{
	int hr=0,min=0,sec=0;
	void input(){
		cout<<"hr:min:sec"<<endl;
		cin>>hr>>min>>sec;
	}
	void display(){
		cout<<endl<<hr<<":"<<min<<":"<<sec<<endl;
	}
	void add(Time t1,Time t2){
		Time t3;
		t3.sec = t1.sec+t2.sec;
		t3.min = t3.sec/60;
		t3.sec = t3.sec %60;
		
		t3.min = t3.min + t1.min + t2.min;
		t3.hr = t3.min/60;
		t3.min = t3.min%60;
		
		t3.hr = t3.hr + t1.hr + t2.hr;
		
		cout<<"Added Time - "<<endl;
		if(t3.hr>24){
			cout<<"Next Day:"<<t3.hr%24<<":"<<t3.min<<":"<<t3.sec;
		}
		else{
			cout<<t3.hr<<":"<<t3.min<<":"<<t3.sec;
		}
		
	}
	
};
int main(){
	Time t1,t2,t3;
	cout<<"This is 24 hr convention"<<endl;
	cout<<"Enter Time 1 - "<<endl;
	t1.input();
	t1.display();
	cout<<"Enter Time 2 - "<<endl;
	t2.input();
	t2.display();	
	t3.add(t1,t2);
	return 0;
}





