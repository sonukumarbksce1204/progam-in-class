#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int i=0;
    try{
    while(1){
        cout<<a[i]<<" ";
        i++;
        if(i==5){
            throw i;
        }
        
    }
    }
    catch(int j){
            cout<<"array goes out of bound";
        }
}
