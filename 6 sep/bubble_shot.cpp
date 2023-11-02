#include<iostream>
using namespace std;
class array{
    public:
        int arr[5];
        int flag=0;//need to modify
        void get(){
            for(int i=0;i<5;i++){
                cin>>arr[i];
            }
        }
        int serch(int item){
            int b=0,e=5;
            while(b<=e){
                if(arr[mid]==item){
                    flag=1;
                    return mid;
                }
                else if(arr[mid]<item){
                    b=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
};
int main(){
    array a;
    a.get();
    int item;
    cout<<"Enter the item:";
    cin>>item;
    int pos=a.serch(item);
    if(a.flag==1){
        cout<<"Item found at position :"<<pos+1;
    }
    else{
        cout<<"Element not found";
    }
}