#include<iostream>
using namespace std;
class search{
    private:
        int *arr;
    public:
        int size;
        search(int n){
            size=n;
            arr=new int[size];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
        }
        void serch(int val){
            int flag=0;
            for(int i=0;i<size;i++){
                if(arr[i]==val){
                    cout<<"Found"<<endl;
                    flag=1;
                    exit(1);
                }
            }
            if(flag==0){
                cout<<"Not found";
            }
        }
};

int main(){
    int n;
    cin>>n;
    search s(n);
    int val;
    cout<<"Enter element to search: ";
    cin>>val;
    s.serch(val);

}