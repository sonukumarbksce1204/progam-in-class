#include<iostream>
using namespace std;
class birthday{
    int date,month,year;
    public:
        birthday(int d,int m,int y){
            date=d;
            month=m;
            year=y;
        }
        ~birthday(){
            cout<<"birthday destructor"<<endl;
        }

        void display(){
            cout<<date<<"/"<<month<<"/"<<year<<endl;
        }
};

class person{
    string name;
    birthday b;
    public:
        person(string s,int d,int m,int y):b(d,m,y){
            name=s;
        }
        ~person(){
            cout<<"Person destructor"<<endl;
        }
        void show(){
            b.display();
            cout<<name<<endl;
        }
};

int main(){
    person p("Xyz",10,10,2000);
    p.show();
}