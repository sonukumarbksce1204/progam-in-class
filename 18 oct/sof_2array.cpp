#include<iostream>
using namespace std;
int main(){
    int *arr1=new int[5];
    int *arr2=new int[5];
    for(int i=0;i<5;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<5;i++){
        cin>>arr2[i];
        arr2[i]+=arr1[i];
    }
    cout<<"Sum of array is: ";
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    delete []arr1,arr2;
}