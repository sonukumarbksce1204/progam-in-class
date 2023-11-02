#include<iostream>
using namespace std;
int main(){
    int *ptr;
    {
        int v=23;
        ptr=&v;
        cout<<"Value is(inside block): "<<*ptr<<"\n";
        cout<<"Address is(inside block): "<<ptr<<"\n";

    }
    cout<<"Value is (outside block: )"<<*ptr<<endl;
    cout<<"Address is (outside block:)"<<ptr<<endl;
    ptr=NULL;
}