#include<iostream>
using namespace std;
template<class T>

T greater1(T x,T y){
   return x>y?x:y;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<"Largest between two: "<<greater1<int>(x,y);
}