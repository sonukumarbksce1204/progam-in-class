#include<iostream>
using namespace std;
class Student{
    protected:
        int roll;
    public:
        void get(){
            cin>>roll;
        }

};

class test:public Student{
    protected:
        int m1;
        int m2;
    public:
        void getm(){
            cin>>m1>>m2;
        }
};

class result:public test{
    public:
    void display(){
        get();
        getm();
        cout<<"Roll: "<<roll<<endl;
        cout<<"Total marks: "<<m1+m2<<endl;
    }
};

int main(){
    result r;
    r.display();
}