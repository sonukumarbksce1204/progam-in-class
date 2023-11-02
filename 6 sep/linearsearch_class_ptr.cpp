#include<iostream>
using namespace std;
class array{
    public:
        int arr[5];
        int flag=0;
        void get(){
            for(int i=0;i<5;i++){
                cin>>arr[i];
            }
        }
        int *ptr=arr;
        int serch(int item){
            //int flag=0
            for(int i=0;i<5;i++){
                if(*ptr==item){
                    flag=1;
                    return i;
                }
                ptr++;
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