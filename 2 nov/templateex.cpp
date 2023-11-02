#include<iostream>
using namespace std;
template <class T>

T square(T a){
    return a*a;
}

int main(){
    int a;
    cin>>a;
    cout<<"Square of integer "<<square<int>(a)<<endl;
    double x;
    cin>>x;
    cout<<"Square of integer "<<square<double>(x)<<endl;
}