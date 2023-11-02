#include<iostream>
using namespace std;

class student{
    protected:
        int rno;
};

class test:public student{
    protected:
        int m1,m2;
};
class sport{
    protected:
        int spm;
};
class result:public test,public sport{
    public:
        void get(){
            cin>>rno>>m1>>m2>>spm;
        }
        void display(){
            cout<<"Roll no: "<<rno<<endl;
            cout<<"Marks1: "<<m1<<endl;
            cout<<"Marks2: "<<m2<<endl;
            cout<<"Sportmark: "<<spm<<endl;
            cout<<"Total: "<<m1+m2+spm<<endl;
        }
};

int main(){
    result r;
    r.get();
    r.display();
}

