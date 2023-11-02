#include<iostream>
using namespace std;
class length{
    protected:
        int l;
    public:
        length(int len){
            l=len;
            cout<<"Constructor length "<<endl;
        }
        ~length(){
            cout<<"length is destroyed"<<endl;
        }
};
class width:public length{
    protected:
        int w;
    public:
        width(int wd,int l):length(l){
            w=wd;
            cout<<"Constructor width "<<endl;
        }
        ~width(){
            cout<<"width is destroyed"<<endl;
        }
};
class area:public width{
    protected:
        int are;
    public:
        area(int l,int b):width(b,l){
            are=l*b;
            cout<<"Constructor area"<<endl;
            cout<<"Area:"<<are<<endl<<endl;
        }
        ~area(){
            cout<<"area is destroyed"<<endl;
        }
};

int main(){
    area a(2,3);
}