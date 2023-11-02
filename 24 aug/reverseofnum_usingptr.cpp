#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *ptr=&n;
    int d=n,rev=0;
    while(*ptr>0){
        rev*=10;
        rev+=*ptr%10;
        *ptr/=10;
        
    }
    cout<<rev;
    
}