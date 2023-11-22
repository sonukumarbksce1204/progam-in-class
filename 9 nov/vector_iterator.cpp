#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1(10);
    cout<<"Size is: "<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        v1[i]=i;
        //cin>>v1[i];
    }
    vector<int>::iterator itr=v1.begin();
    itr+5;
    v1.insert(itr,100);
    cout<<" "<<v1.size()<<endl;

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}