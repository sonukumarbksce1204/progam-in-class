#include<iostream>
using namespace std;

int prime(int n){
    int f=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            f++;
        }
    }
    return f;
}

int main(){
    int n;
    cin>>n;
    try{
        if(prime(n)==2){
            throw(1);
        }
    }
    catch (int n){
        cout<<"Prime input caused an exception"<<endl;
    }
}