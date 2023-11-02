#include<iostream>
using namespace std;
int main(){
    int num,i,count=0;
    cin>>num;
    int *ptr=&num;
    for(i=1;i<=num;i++){
        if(*ptr%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}