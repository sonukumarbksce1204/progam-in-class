#include<iostream>
using namespace std;
class Array{
    private:
        int *arr;
    public:
        void get(int n){
            arr=new int[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
        }
        void display(int n){
            cout<<"Even element: ";
            for(int i=0;i<n;i++){
                if(arr[i]%2==0){
                    cout<<arr[i]<<" ";
                }
            }
        }
        ~Array(){
            delete []arr;
        }
};

int main(){
    int *n=new int;
    cin>>*n;
    Array *ptr=new Array;
    ptr->get(*n);
    ptr->display(*n);
    delete n;

}