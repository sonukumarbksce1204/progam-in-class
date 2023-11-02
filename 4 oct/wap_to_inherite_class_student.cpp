#include<iostream>
#include<string>
using namespace std;

class student{
    private:
        int roll;
    protected:
        string sec;
    public:
        void getroll(){
            cin>>roll>>sec;
        }
        void showroll(){
            cout<<"Roll: "<<roll<<endl<<"Section: "<<sec<<endl;
        }
};

class result :public student{
    private:
        int rno;
        int fees;
    protected:
        string s;
    public:
        void getfee(){
            cin>>fees;
        }
        void display(){
            showroll();
            cout<<"Fees: "<<fees;
        }
};

int main(){
    result r;
    r.getroll();
    r.getfee();
    r.display();
}