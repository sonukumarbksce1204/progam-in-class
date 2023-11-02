#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the values of and b";
    cin>>a;
    cin>>b;
    int x=a-b;
    try{
        if(x!=0){
            cout<<"Result(a/x)="<<a/x<<endl;
        }
        else{          //exception detected
            throw(x);   //exception thrown
        }
    }
    catch(int i){           //catch the exception 
        cout<<"exception caught:x="<<x;
    }
    cout<<endl;

}