#include<iostream>
using namespace std;

class Student{
	private:
		string name,roll;
		int m[3];
	public:
		int total;
		void input();
		void display();
};
void Student::input(){
	
	cout<<"Enter Name - ";
	getline(cin,name);
	//cin.ignore();
	
	cout<<"Enter Roll - ";
	getline(cin,roll);
	//cin.ignore();
	total=0;
	cout<<"Enter Marks of 3 subjects - ";
	for(int i=0;i<3;i++){
		cin>>m[i];
		total+=m[i];
	}
	cin.ignore();
}
void Student::display(){
	cout<<"Name - "<<name<<endl;
	cout<<"Roll - "<<roll<<endl;
	cout<<"Marks - ";
	for(int i=0;i<3;i++){
		cout<<m[i]<<" ";
	}
	cout<<endl;
	cout<<"Total Marks - "<<total<<endl;
}

Student max(Student s[],int len){
	Student temp;
	int max=s[0].total;
	temp = s[0];
	for(int i=1;i<len;i++){
		if(max < s[i].total){
			max = s[i].total;
			temp = s[i];
		}
		else{
			continue;	
		}
	}
	return temp;

}
int main(){
	Student s[3];
	cout<<"Enter Details of 3 students "<<endl;
	cout<<"***************************"<<endl;
	for(int i=0;i<3;i++){
		s[i].input();
		cout<<"***************************"<<endl;
	}
	cout<<"Showing Details - "<<endl;
	for(int i=0;i<3;i++){
		cout<<"***************************"<<endl;
		s[i].display();
		cout<<"---------------------------"<<endl;
	}
	cout<<"Topper"<<endl;
	cout<<"---------------------------"<<endl;
	max(s,3).display();	
	return 0;
	

}
