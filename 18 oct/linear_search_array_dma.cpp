#include<iostream>
using namespace std;
int main(){
    int *arr=new int[5];
    int *val=new int;
    int *flag=new int(-1);

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cin>>*val;
    for(int i=0;i<5;i++){
        if(arr[i]==*val){
            cout<<"Found "<<i<<endl;
            *flag=1;
            break;
        }
    }
    if(*flag==-1){
        cout<<"Not found"<<endl;
    }
    delete []arr,val,flag;
}