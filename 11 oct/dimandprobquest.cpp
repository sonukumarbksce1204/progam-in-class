#include<iostream>
using namespace std;

class student{
    protected:
        int rno;
        int id;
    public:
        void getr(){
            cin>>rno>>id;
        }
};

class test:public virtual student{
    protected:
        int m1,m2;
    public:
        void getm(){
            cin>>m1>>m2;
        }
};
class sport:public virtual student{
    protected:
        int spm;
    public:
        void getsp(){
            cin>>spm;
        }
};
class result:public test,sport{
    public:
        void get(){
            getr();
            getm();
            getsp();
        }
        void display(){
            cout<<"Roll no: "<<rno<<endl;
            cout<<"ID: "<<id<<endl;
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

