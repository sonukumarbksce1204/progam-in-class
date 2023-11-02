#include<iostream>
using namespace std;
void divide(double x,double y){
    cout<<"We are innside the function"<<endl;
    try{
        if(y==0.0){
            throw y;
        }
        else{
            cout<<"Division="<<x/y<<endl;;
        }
    }
    catch(double){
        cout<<"caught double inside function"<<endl;
        throw;
    }
    cout<<"End of function"<<endl;
}

int main(){
    cout<<"Inside main"<<endl;
    try{
        cout<<"We are inside the try block"<<endl;
        divide(10.5,2.0);
        divide(20.0,0.0);
    }
    catch(double){
        cout<<"caught double inside main"<<endl;
    }
    cout<<"End main"<<endl;
}