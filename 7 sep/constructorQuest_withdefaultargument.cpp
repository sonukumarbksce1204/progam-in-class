#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    string fname;
    string city;
    string country;
    int hno;
    int zpcd;
    public:
        student(string na,string fn,string ci,string cou="India",int h=101,int zip=10001){
            name=na;
            fname=fn;
            city=ci;
            country=cou;
            hno=h;
            zpcd=zip;
        }
        void display(){
            cout<<name<<" "<<fname<<" "<<city<<" "<<country<<" "<<hno<<" "<<zpcd<<endl;
        }
};

int main(){
    student s1("abc","xyz","pgw","punjab");
    s1.display();
}