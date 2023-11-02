#include<iostream>
using namespace std;
int main(){
    int arr[5],sum=0,i,diff=0;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    int *ptr=arr;
    for(i=0;i<5;i++){
        sum+=*ptr;
        diff-=*ptr; 
        ptr++;
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Diff is: "<<diff<<endl;
}