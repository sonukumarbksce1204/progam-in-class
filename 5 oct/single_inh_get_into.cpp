#include<iostream>
using namespace std;

class A{
    protected:
        int b;
    public:
        int get(){
            cin>>b;
        }
};
class B:public A{
    protected:
        int h;
    public:
        int get(){ 
            cin>>h;
        }
        void display(){
            cout<<h<<endl;
            cout<<b;
        }
};


int main(){
    B b;
    b.get();
    b.display();
}