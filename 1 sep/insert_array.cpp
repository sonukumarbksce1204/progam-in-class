#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p,data;
    cout<<"Enter the postion and data:";
    cin>>p>>data;
    for(int i=n;i<=p;i--){
        arr[i+1]=arr[i];
    }
    n++;
    arr[p]=data;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}