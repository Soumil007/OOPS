#include<iostream>
#include<cstdarg>
using namespace std;
void sum(string msg,...){
    va_list valist;
    int total=0,num;
    va_start(valist,msg);
    while((num=va_arg(valist, int))!=0){ //accessign all the arguments assigned to valist
        total += num;
    }
    va_end(valist);
    cout<<msg<<total<<endl;
}
int main(){
    sum("The sum of 1 2 3 is ",1,2,3,0);
    return 0;
}