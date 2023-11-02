#include<iostream>
using namespace std;

int main(){
    int *n=new int;
    cin>>*n;
    int *fact=new int(1);
    for(int i=*n;i>=2;i--){
        (*fact)*=i;
    }
    cout<<"factorial of number is "<<*fact<<endl;
    delete fact,n;

}