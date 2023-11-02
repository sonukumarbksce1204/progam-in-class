#include<iostream>
using namespace std;

int main(){
    double *arr=new double[5];
    double *sum=new double(0.0);
    double *avg=new double;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        *sum+=arr[i];
    }
    *avg=(*sum)/5;
    cout<<*avg;
    delete []arr,sum,avg;
}