#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //sum+=arr[i];
    }
    int *ptr=arr;
    for(int i=0;i<n;i++){
        sum+=*ptr;
        ptr++;
    }
    cout<<sum;

}