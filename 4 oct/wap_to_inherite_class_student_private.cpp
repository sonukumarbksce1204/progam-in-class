#include<iostream>
#include<string>
using namespace std;

class student{
    int roll;
    protected:
        // int roll;
        string sec;
    public:
        void getroll(){
            cin>>roll>>sec;
        }
        void showroll(){
            cout<<"Roll: "<<roll<<endl<<"Section: "<<sec<<endl;
        }
};

class result :private student{
    private:
        int rno;
        int fees;
    protected:
        string s;
    public:
        void getfee(){
            getroll();
            cin>>fees;
        }
        void display(){
            showroll();
            cout<<"Fees: "<<fees;
        }
};

int main(){
    result r;
    // r.getroll();
    r.getfee();
    r.display();
}