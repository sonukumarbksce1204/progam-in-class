#include<iostream>
using namespace std;

class Rectangle{
    public:
        int l,b;
        void get(){
            cin>>l>>b;
        }
        virtual void area(){
            cout<<"Area of rectangle: "<<l*b<<endl;
        }
};
class square:public Rectangle{
    public:
    int s;
    void get(){
        cin>>s;
    }
    void area(){
        cout<<"Square: "<<s*s<<endl;
    }
};

int main(){
    Rectangle *ptrb;
    Rectangle obj;
    ptrb=&obj;
    ptrb->get();
    ptrb->area();
    square objs;
    ptrb=&objs;
    ((square *)ptrb)->get();
    ptrb->area();
}