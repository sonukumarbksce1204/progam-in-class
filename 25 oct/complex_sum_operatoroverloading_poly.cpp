#include<iostream>
using namespace std;
class complex1{
    private:
        
    public:
        int r,im;
    complex1(){
        r=0;
        im=0;
    }
    complex1(int re,int img){
        r=re;
        im=img;
    }
    complex1 operator +(complex1 obj){
        complex1 temp;
        temp.r=r+obj.r;
        temp.im=im+obj.im;
    }
    void showdata(){
        cout<<r<<" "<<im<<"i"<<endl;
    }

};

int main(){
    complex1 c1(10,12),c2(32,11),c3;
    c3=c1+c2;
    c3.showdata();

}