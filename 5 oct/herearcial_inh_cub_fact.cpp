#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void get(){
            cin>>a;
        }
        int val(){
            return a;
        }
};

class B:public A{
    public:
        int fact=1;
        void factor(){
        for(int i=1;i<=val();i++){
            fact*=i;
        }
        cout<<fact<<endl;
        }
};
class C:public A{
    public:
        void cub(){
            cout<<val()*val()*val()<<endl;
        }
};

int main(){
    B b;
    C c;
    b.get();
    b.factor();
    c.get();
    c.cub();
}