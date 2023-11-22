#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1(5);
    cout<<"Size initially: "<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        v1[i]=i;
    }
    cout<<"Value: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=5;i<10;i++){
        v1.push_back(i);
    }
    cout<<"Size: "<<v1.size()<<endl;
    cout<<"Value: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1.pop_back();
    v1.pop_back();
    cout<<"Size: "<<v1.size()<<endl;
    cout<<"Value: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<endl<<"Iterator"<<endl;
    vector<int>::iterator v;
    v=v1.begin();
    while(v!=v1.end()){
        cout<<"value of v= "<<*v<<endl;
        v++;
    }

}