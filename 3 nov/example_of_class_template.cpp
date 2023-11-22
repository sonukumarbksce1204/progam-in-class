#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
class student{
    private:
        T1 id;
        T2 name;
        T3 marks;
    public:
        student(T1 i,T2 n,T3 m){
            id=i;
            name=n;
            marks=m;
        }
        void print(){
            (marks%2==0)?put():put1();
        }
        void put(){
            if(marks%2==0){
            cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl<<"Marks: "<<marks;
            }
        }
        void put1(){};
};

int main(){
    student<int,string,int> s1(101,"Ram",56);
    s1.print();
}