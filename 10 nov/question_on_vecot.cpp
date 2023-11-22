#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5);
    for(int i=0;i!=v.size();i++){
        cin>>v[i];
    }
    int a1,a2;
    cin>>a1>>a2;
    v.push_back(a1);
    v.push_back(a2);
    for(int i=0;i!=v.size();i++){
        if(v[i]%2==0){
            cout<<v[i]<<" ";
        }
    }
}