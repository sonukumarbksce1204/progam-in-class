#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"A is called"<<endl;
        }
        ~A(){
            cout<<"A is destroyed"<<endl;
        }

};
class B:public A{
    public:
        B(){
            cout<<"B is called"<<endl;
        }
        ~B(){
            cout<<"B is destroyed"<<endl;
        }

};
class C:public B{
    public:
        C(){
            cout<<"C is called"<<endl;
        }
        ~C(){
            cout<<"C is destroyed"<<endl;
        }

};

int main(){
    C c;
}