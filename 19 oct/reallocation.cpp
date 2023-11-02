#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"\n Enter the initial size:";
    cin>>n;
    int *arr=new int[n];
    if(arr==NULL){
        cout<<"\n Memory allocation failed";
        exit(1);
    }
    cout<<"\nEnter the array elements:";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cin>>m;
    int *temp=new int[m];
    if(temp==NULL){}
        cout<<"\n\nMemoer allocation failed";
        exit(1);
    }
    cout<<"\n\n\nCOPYING THE OLD ARRAY";
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    delete []arr;
    arr=temp;

    cout<<""


}