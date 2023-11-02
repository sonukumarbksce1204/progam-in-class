#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int *ptr=arr;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    ptr=ptr-1;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    ptr+=4;
    cout<<ptr<<endl;
    int *p=arr;
    cout<<*ptr-*p<<endl;
    cout<<ptr-p<<endl;
}