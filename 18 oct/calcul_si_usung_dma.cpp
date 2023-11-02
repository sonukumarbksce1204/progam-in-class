#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    float *r=new float;
    int *t=new int;
    cin>>*p;
    cin>>*r;
    cin>>*t;
    cout<<((*p)*(*r)*(*t))/100;
    delete p,r,t;
}