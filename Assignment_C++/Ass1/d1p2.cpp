/*
WAP in C++ to populate an integer array dynamically with n
values, and then apply binary searching and insertion sort
technique on the same array. Take n as a user input.
*/
#include<iostream>
using namespace std;
void display(int *p,int n){

	cout<<endl<<"Displaying array elements - ";
	for(int i=0;i<n;i++){
		cout<<*(p+i)<<" ";
	}
}

void insertion_sort(int *p,int n){
	int temp;
	for(int i=1;i<n;i++){
		temp = *(p+i);
		while(temp<*(p+(i-1)) && i>=1){
			*(p+i) = *(p+(i-1));
			i--;			
		}
		*(p+i) = temp;
	}
}

int binary_search(int *p,int min,int max,int ele){
	while(min<=max){
		int mid = (min+max)/2;
		if(*(p+mid) == ele){
			return mid;
		}else if(*(p+mid)<ele){
			return binary_search(p,mid+1,max,ele);
		}else{
			return binary_search(p,min,mid-1,ele);
		}
	}
	return -1;
}


int main(){
	int n;
	cout<<"Enter the size of the array - ";
	cin>>n;
	int *arr = new int[n];
	cout<<endl<<"Enter "<<n<<" elements - ";
	for(int i=0;i<n;i++)
	{
		cin>>*(arr+i);
	}
	
	display(arr,n);

	cout<<endl<<endl<<"After Insertion Sort - "<<endl;
	
	insertion_sort(arr,n);
	
	display(arr,n);

	int ele;
	cout<<endl<<endl<<"Enter the element wish to search - ";
	cin>>ele;
	
	int flag = binary_search(arr,0,n-1,ele);
	if(flag>=0){
		cout<<endl<<"Element found at position(zero indexed) - "<<flag<<endl;
	}else{
		cout<<endl<<"Element not found!!"<<endl;
	}
	return 0;
}
