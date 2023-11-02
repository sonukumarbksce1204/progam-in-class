#include<iostream>
using namespace std;

class base{
    public:
        base(){
            cout<<"Construcing base\n";
        }
        ~base(){  //solution virtual ~base(){
            cout<<"Destrucing base\n";
        } 
};

class derived1:public base{
    public:
        derived1(){
            cout<<"Constructing derived\n";
        }
        ~derived1(){
            cout<<"Destructing derived\n";
        }

};

int main(){
    base *b= new derived1;
    delete b;
}
