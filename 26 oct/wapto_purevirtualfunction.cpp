#include<iostream>
using namespace std;

class rectangle{
    public:
        int l,b;
        rectangle(int l,int b){
            this->l=l;
            this->b=b;
        }
        virtual void areas()=0;
        virtual void arear()=0;
};

class square:public rectangle{
    public:
        int s;
        square(int s,int l,int b):rectangle(l,b){
            this->s=s;
        }
        void areas(){
            cout<<"area of square: "<<s*s<<endl;
        }
        void arear(){
            cout<<"area of rectangle: "<<l*b<<endl;
        }
};

int main(){
    rectangle *r;
    square s(2,2,3);
    r=&s;
    r->areas();
    r->arear();
}