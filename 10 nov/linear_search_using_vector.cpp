#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v(5);
    for(int i=0;i!=v.size();i++){
        cin>>v[i];
    }
    int val;
    cin>>val;
    for(vector<int>::iterator i=v.begin();i!=v.end();i++){
        if(*i==val){
            cout<<"found";
            exit(1);
        }
    }
    cout<<"Not found";

}