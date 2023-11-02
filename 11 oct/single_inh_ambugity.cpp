#include<iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        int get(){
            cout<<"a ";
            cin>>a;
        }
        void display(){
            cout<<a;
        }
};
class B:public A{
    protected:
        int b;
    public:
        int get(){ 
            A::get();
            cout<<"b ";
            cin>>b;
        }
        void display(){
            cout<<b;
        }
};


int main(){
    B b;
    // b.A::get();
    // b.A::display();
    b.get();
}