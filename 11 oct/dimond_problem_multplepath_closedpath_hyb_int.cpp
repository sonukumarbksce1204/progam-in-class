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
};
class B:public virtual A{
    protected:
        int b;
    public:
        int get(){ 
            A::get();
            cout<<"b ";
            cin>>b;
        }
};
class C:public virtual A{
    protected:
        int c;
    public:
        int get(){ 
            A::get();
            cout<<"c ";
            cin>>c;
        }
};
class D:public B,public C{
    protected:
        int d;
    public:
        int get(){
            C::get();
            B::get();
            cout<<"D: "<<endl;
            cin>>d;
        }
};


int main(){
    D d;
    // b.A::get();
    // b.A::display();
    d.get();
}