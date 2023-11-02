#include<iostream>
using namespace std;

class array{
    private:
        int *arr;
    public:
        int size;
        array(int s){
            size=s;
            arr=new int[size];
            for(int i=0;i<size;i++){
                cin>>arr[i];
            }
        }
        void binser(int val){
            int lb=0,ub=size;
            int mid=(lb+ub)/2;
            while(ub>lb){
                if(arr[mid]==val){
                    cout<<"found";
                    break;
                }
                else if(val<arr[mid]){
                    lb=0;
                    ub=mid-1;
                }
                else{
                    lb=mid+1;
                }
                mid=(lb+ub)/2;

            }
        }
};

int main(){
    int n;
    cin>>n;
    array a(n);
    a.binser(20);
}
