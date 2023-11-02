#include<iostream>
using namespace std;

class rect{
    int l,b;
    public:
        int  getl(){
            cin>>l;
            return l;
        }
        int getw(){
            cin>>b;
            return b;
        }
        

};
class circle{
    double r;
    public:
        double getcir(){
            cin>>r;
            return r;
        }
};

class area:public rect,public circle{
    public:
        void display(){
            cout<<"Area of rectangle: "<<getl()*getw()<<endl;;
            cout<<"Area of circle: "<<3.14*getcir()*getcir();
        }
};

int main(){
    area a1;
    a1.display();
}