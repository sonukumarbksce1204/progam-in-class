#include<iostream>
using namespace std;
class empl{
    private:
        int sal,id;
    public:
        void input(){
            cin>>id>>sal;
        }
        void display(){
            cout<<"ID: "<<id<<"\nSalary: "<<sal;
        }
};

int main(){
    empl *ptr=new empl;
    ptr->input();
    ptr->display();
    delete ptr;


}