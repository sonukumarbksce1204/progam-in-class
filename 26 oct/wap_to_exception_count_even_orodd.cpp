#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int tote=0,toto=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            tote++;
        }
        else{
            toto++;
        }
    }
    try{
        if(tote%2==0){
            cout<<"Even"<<endl;
        }
        else{
            throw(tote);
        }
    }
    catch(int i){
        cout<<"Exception occured"<<endl;
    }
    


}