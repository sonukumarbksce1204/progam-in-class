#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //sum+=arr[i];
    }
    int *ptr=arr;
    int max=*ptr;
    for(int i=1;i<=n;i++){
        if(max<*ptr){
            max=*ptr;
        }
        ptr++;
    }
    cout<<max;

}