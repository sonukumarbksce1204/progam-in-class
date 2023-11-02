#include<iostream>
using namespace std;
void divide(int x,int y,int z){
    cout<<"We are innside the function"<<endl;
    if((x-y)!=0){
        int R=z/(x-y);
        cout<<"Result="<<R<<endl;
    }
    else{
        throw(x-y);
    }
}

int main(){
    try{
        cout<<"We are inside the try block"<<endl;
        divide(10,20,30);
        divide(10,10,30);
    }
    catch(int i){
        cout<<"caught the exception"<<endl;
    }
}