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
		if(hr<0){
			cout<<"Prev Day "<<-hr<<":"<<min<<":"<<sec<<endl;
		}
		else if(hr>24){
			cout<<"Next Day "<<hr%24<<":"<<min<<":"<<sec<<endl;
		}else{
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}
		
	}
	
	//Addition of time
	//t1	     t2
	Time add(Time t){
		Time result;
		result.sec = sec + t.sec;
		result.min = result.sec/60;
		result.sec = result.sec %60;
		
		result.min = result.min + min + t.min;
		result.hr = result.min/60;
		result.min = result.min%60;
		
		result.hr = result.hr + hr + t.hr;
		
		return result;
	}
	//Substraction
	//we are substracting from t1 to t2
	//t1          t2
	Time sub(Time t){
		Time result;
		if(sec < t.sec){
			sec+=60;
			min-=1;
			result.sec = sec - t.sec;
		}
		else{
			result.sec = sec - t.sec;
		}
		if(min < t.min){
			min+=60;
			hr-=1;
			result.min = min - t.min;
		}
		else{
			result.min = min - t.min;
		}
		if(hr < t.hr){
			hr+=24;
			result.hr = hr - t.hr;
			result.hr = -result.hr;
		}else{
			result.hr = hr - t.hr;
		}
		
		
		
		return result;
	}
	
	
	
};
int main(){
	Time t1,t2,result;
	cout<<"This is 24 hr convention"<<endl;
	
	//Insert time 1
	cout<<"Enter Time 1 - "<<endl;
	t1.input();
	t1.display();
	
	//Insert time 2
	cout<<"Enter Time 2 - "<<endl;
	t2.input();
	t2.display();	
	
	//Addition of time
	result = t1.add(t2);
	cout<<"After adding time - ";
	result.display();
	
	//Substraction of time
	result = t1.sub(t2);
	cout<<"After substracting time - ";
	result.display();
	return 0;
}





