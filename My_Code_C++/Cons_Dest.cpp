#include<iostream>
using namespace std;

class test{
    string var;
    static int obj_count;
    static int obj_alive;
    
    public:
    test(string);
    ~test();
    void show();
};

//initializing static variables outside class

int test::obj_count = 0;
int test::obj_alive = 0;

//Another way

//int test::obj_count, test::obj_alive = 0;

//defition of constructor outside class
test::test(string n):var(n){
    cout<<"Cons                 "<<n<<endl;
    obj_alive++;
    obj_count++;
}; //initializer

test::~test(){
    cout<<"DEST                 "<<var<<endl;
    obj_alive--;
}

void test::show(){
    cout<<obj_count<<"                      "<<obj_alive<<endl;
}
int main(){
    cout<<"OBJ_COUNT            OBJ_ALIVE"<<endl;
    test t1("One");
    t1.show();
    
    {
        test t2("Two");
        t2.show();
        {
            test t3("Three");
            t3.show();
        }
        t2.show();
        
        
    }
    
    t1.show();

    return 0;
}






