#include<iostream>
#include<cstdarg>
using namespace std;
double average(int num,...){
    va_list valist;
    double sum=0.0; 
    int i;
    va_start(valist, num); //initializes valist for num number of arguments
        for(i=0;i<num;i++){
            sum += va_arg(valist, int);
        }
    va_end(valist);
    return sum/num;
}
int main(){
    cout<<" Average of 3 5 3 6 7 7 is "<<average(6,3,5,3,6,7,7)<<endl;
    cout<<"Average of 5 9 6 3 is "<<average(4,5,9,6,3)<<endl;
    return 0;
}