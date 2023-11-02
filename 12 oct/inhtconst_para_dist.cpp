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


int main(){
    B b(5);
}