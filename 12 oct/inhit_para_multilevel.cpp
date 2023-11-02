#include<iostream>
using namespace std;
class A{
    int val;
    public:
        A(int v){
            val=v;
            cout<<"A is called"<<endl;
        }
        ~A(){
            cout<<"A is destroyed"<<endl;
        }

};
class B:public A{
    int x;
    public:
        B(int y):A(y){
            x=y;
            cout<<"B is called"<<endl;
        }
        ~B(){
            cout<<"B is destroyed"<<endl;
        }

};
class C:public B{
    int x;
    public:
        C(int y):B(y){
            x=y;
            cout<<"C is called"<<endl;
        }
        ~C(){
            cout<<"C is destroyed"<<endl;
        }

};


int main(){
    C c(5);
}