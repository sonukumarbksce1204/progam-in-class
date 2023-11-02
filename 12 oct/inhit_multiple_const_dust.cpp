#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"A constructor"<<endl;
        }
        ~A(){
            cout<<"A destoructor"<<endl;
        }
};
class B{
    public:
        B(){
            cout<<"B constructor"<<endl;
        }
        ~B(){
            cout<<"B destoructor"<<endl;
        }
};
class C:public A,public B{//public B,public A  order changed
    public:
        C(){
            cout<<"C constructor"<<endl;
        }
        ~C(){
            cout<<"C destoructor"<<endl;
        }
};

int main(){
    C c;
}